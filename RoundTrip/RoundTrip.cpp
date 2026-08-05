#include <bits/stdc++.h>
using namespace std;

void solve() {
    int R, X, D, n, acc = 0;
    cin >> R >> X >> D >> n;
    string divs;
    cin >> divs;
    for(auto d : divs) {
        if(d == '1' || (d == '2' && R < X)){
            acc++;
            R = max(0, R-D);
        }
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