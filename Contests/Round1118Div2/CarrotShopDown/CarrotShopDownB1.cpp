#include <bits/stdc++.h>
using namespace std;

void solve() {
int n, m;
    cin >> n >> m;
    vector<int> carrots(n);
    map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> carrots[i];
        freq[carrots[i]]++; 
    }

  
    sort(carrots.begin(), carrots.end());

    int ans = 0;


    for (int i = 0; i < n; ++i) {
        int val = carrots[i];

  
        int pedazos_val = (n - i) + freq[2 * val];
        ans = max(ans, pedazos_val);

        if (val % 2 == 0) {
            int S = val / 2;
    
            auto it = lower_bound(carrots.begin(), carrots.end(), S);
            int idx = distance(carrots.begin(), it);
            
            int pedazos_mitad = (n - idx) + freq[val]; 
            ans = max(ans, pedazos_mitad);
        }
    }

    cout << ans << "\n";

}

int main() {
    // Optimización de entrada/salida para CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Descomentar si hay múltiples casos de prueba
    while(t--) {
        solve();
    }
    return 0;
}