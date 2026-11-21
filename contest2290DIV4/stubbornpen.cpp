#include <bits/stdc++.h>
using namespace std;

void solve() {
    unordered_map<char, char>cambio;
    cambio['R'] = 'B';
    cambio['B'] = 'R';
    int n ; cin >> n;
    int letra_actual = 'R';
    int acc = 0;
    while(n--){
        char x; cin >> x;
        if(x != letra_actual){
            acc++;
            letra_actual = x;
        }
        letra_actual = cambio[letra_actual];
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