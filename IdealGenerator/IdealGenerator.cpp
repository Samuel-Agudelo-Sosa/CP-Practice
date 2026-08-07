#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;
    cout << (k % 2 == 0 ? "NO": "YES") << "\n";
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