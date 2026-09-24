#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s(n, ' ');
    vector<int> prefix_sum(n + 1 , 0);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i] == '1') {
            prefix_sum[i + 1] = prefix_sum[i] + 1;
        } else {
            prefix_sum[i + 1] = prefix_sum[i];
        }
    }
    
    if (s[0] == '1'){
        cout << n - prefix_sum[n];
    }
    else{
        int minimo = prefix_sum[n];
        bool primer_uno = false;
        for(int i = 1; i < n; i++){
            if(s[i] == '1'){
                primer_uno = true;
            }
            if(primer_uno){
                int unos_antes = prefix_sum[i];
                int ceros_despues = (n -  1 - i) - (prefix_sum[n] - prefix_sum[i + 1]);
                minimo = min(minimo, unos_antes + ceros_despues);
            }
        }
        cout << minimo;
    }
    cout << "\n";
    
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