#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    if (a >= b){
        cout << a + c - b << "\n";
    }
    else{
        cout << max(b - a,  abs(a + c - b)) << "\n";
    }
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