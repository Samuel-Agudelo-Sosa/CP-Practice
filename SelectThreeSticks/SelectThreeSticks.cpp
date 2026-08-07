#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
     vector<int> sticks(n);
    for (int &stick : sticks)
    {
        cin >> stick;
    }
    sort(sticks.begin(), sticks.end());
    int minimo = INT_MAX;
    for(int i = 0; i < n-2; i++){
        minimo = min(minimo, sticks[i+2] - sticks[i]);
    }
    cout << minimo << "\n";
   


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