#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int dato = 1, contador = 0;
    for(int i = 0; i < n; i++){
        cin >> dato;
        if(dato == 1){
            contador++;
        }
    }
    if(contador >= n - contador){
        cout << "Bessie" << "\n";
    }
    else{
        cout << "Elsie" << "\n";
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