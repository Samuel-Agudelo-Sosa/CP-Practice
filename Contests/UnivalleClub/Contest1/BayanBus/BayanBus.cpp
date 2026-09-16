#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; cin >> k;
    cout << "+";
    for(int i = 0; i < 24 ; i++) cout << "-";
    cout << "+\n";

    cout << "|";
    string primera_fila(22, '.');
    primera_fila[0] = (k >= 1) ? 'O' : '#';
    primera_fila[2] = (k >= 5) ? 'O' : '#';
    int acc = 5;
    for (int i = 4; i < 22; i+=2) {
        if(acc + 3 <= k) {
            primera_fila[i] = 'O';
            acc += 3;
        } else {
            primera_fila[i] = '#';
        }
    }
    cout << primera_fila << "|D|)" << "\n";

    cout << "|";
    string segunda_fila(22, '.');
    segunda_fila[0] = (k >= 2) ? 'O' : '#';
    segunda_fila[2] = (k >= 6) ? 'O' : '#';
    acc = 6;
    for (int i = 4; i < 22; i+=2) {
        if(acc + 3 <= k) {
            segunda_fila[i] = 'O';
            acc += 3;
        } else {
            segunda_fila[i] = '#';
        }
    }
    cout << segunda_fila << "|.|\n";

    string tercera_fila(24, '.');
    cout << "|";
    tercera_fila[0] = (k >= 3) ? 'O' : '#';
    cout << tercera_fila << "|\n";

    cout << "|";
    string cuarta_fila(22, '.');
    cuarta_fila[0] = (k >= 4) ? 'O' : '#';
    acc = 4;
    for (int i = 2; i < 22; i+=2) {
        if(acc + 3 <= k) {
            cuarta_fila[i] = 'O';
            acc += 3;
        } else {
            cuarta_fila[i] = '#';
        }
    }
    cout << cuarta_fila << "|.|)\n";

    cout << "+";
    for(int i = 0; i < 24 ; i++) cout << "-";
    cout << "+\n";
}

int main() {
    // Optimización de entrada/salida para CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Descomentar si hay múltiples casos de prueba
    while(t--) {
        solve();
    }
    return 0;
}