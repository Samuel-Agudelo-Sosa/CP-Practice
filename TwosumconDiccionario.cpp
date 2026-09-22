#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, target; 
    cin >> n >> target;
    
    // Reserva espacio explícito para los 'n' elementos
    vector<int> nums(n);
    // Mapea: Valor del elemento -> Índice en el arreglo
    unordered_map<int, int> numeros;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        int complemento = target - nums[i]; 
        
        // Verifica si el complemento ya existe en la tabla
        if (numeros.find(complemento) != numeros.end()) {
            cout << numeros[complemento] << " " << i << "\n";
            return;
        }
        
        // Guarda el valor actual y su índice
        numeros[nums[i]] = i;
    }
    cout << "NONE\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}