#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    long long a1, an, b;
    if (n == 1) {
        cin >> a1;
        cout << a1 << "\n";
        return;
    }

   
    cin >> a1;
    for (int i = 0; i < n - 2; ++i) {
        cin >> b;
    }

    cin >> an;
    cout << gcd(a1, an) << "\n";
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