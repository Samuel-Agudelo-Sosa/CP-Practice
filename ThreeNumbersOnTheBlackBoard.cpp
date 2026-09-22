#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    int a,b,c; 
    cin >> a >> b;
    int minim = min(a,b);
    int maxim = max(a,b);
    long long suma = a + b;
    cin >> c;
    minim = min(minim, c);
    maxim = max(maxim, c);
    suma += c -  maxim;
    (maxim >= suma ? cout << suma - minim : cout << maxim - minim);
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