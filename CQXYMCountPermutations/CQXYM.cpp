#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    long long m = 1e9 + 7;
    long long acc = n;
    for(int i = 2 * n - 1; i > 1; i--){
        acc = ( (acc % m) * (i % m) ) % m;
    }
    cout << acc << "\n";
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