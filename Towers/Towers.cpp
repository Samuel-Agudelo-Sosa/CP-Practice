#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> lengths(n);
//     for(int& l: lengths){
//         cin >> l;
//     }
//     sort(lengths.begin(),lengths.end());
//     int max_rep = 0, acc_elements = 1,  acc_rep = 0, current_element=lengths[0];
//     for(int l : lengths){
//         if (current_element == l) {
//             acc_rep++;
//         }
//         else{
//             acc_rep = 1;
//             acc_elements++;
//         }
//         max_rep = max(max_rep, acc_rep);
//         current_element = l;
//     }

//     cout << max_rep << " " << acc_elements;

// }
void solve() {
    int n;
    cin >> n;

    int freq[1001] = {0};
    int max_height = 0, total_towers = 0;

    for (int i = 0; i < n; ++i) {
        int length;
        cin >> length;
        
        // Si es la primera vez que vemos esta longitud, se crea una nueva torre
        if (freq[length] == 0) {
            total_towers++;
        }
        
        // Incrementamos la frecuencia y actualizamos la altura máxima
        max_height = max(max_height, ++freq[length]);
    }

    cout << max_height << " " << total_towers << "\n";
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