#include <iostream>

using namespace std;

int main() {
    // Optimización de I/O para evitar Time Limit Exceeded
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (!(cin >> q)) return 0;
    
    long long modulo = 1e9 + 7;
    long long inv6 = 166666668; // Inverso modular de 6 bajo 10^9+7

    while (q--) {
        long long n;
        cin >> n;

        // Reducimos n inicial para evitar que las multiplicaciones exploten
        long long n_mod = n % modulo;
        
        // Multiplicamos término a término, aplicando el módulo en cada salto
        long long total = n_mod;
        
        // Sumamos 'modulo' antes de aplicar % para evitar residuos negativos en C++
        total = (total * ((n_mod - 1 + modulo) % modulo)) % modulo;
        total = (total * ((n_mod - 2 + modulo) % modulo)) % modulo;
        
        // Reemplazamos la división entre 6 por la multiplicación de su inverso modular
        total = (total * inv6) % modulo;

        cout << total << "\n";
    }
    return 0;
}