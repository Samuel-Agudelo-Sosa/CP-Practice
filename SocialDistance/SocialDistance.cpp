#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> conditions(n);
//     for(int& c : conditions) {
//         cin >> c;
//     }
//     sort(conditions.begin(), conditions.end(), greater<int>());
//     int acc = conditions[0] * 2 + n;
//     for(int i = 1; i < n - 1; i++){
//         if (acc > m) {
//             cout << "NO" << "\n";
//             return;
//         }
//         acc += conditions[i];
//     }

//     cout << (acc <= m ? "YES" : "NO") << "\n";
// }


void solve() {
    long long n, m; // long long para evitar overflow
    cin >> n >> m;
    
    long long total_sum = 0;
    long long max_val = -1;
    long long min_val = 2e9; // Valor inicial mayor al máximo posible
    
    for(int i = 0; i < n; i++) {
        long long c;
        cin >> c;
        total_sum += c;
        if(c > max_val) max_val = c;
        if(c < min_val) min_val = c;
    }
    
    // Tu misma lógica matemática, pero simplificada
    long long acc = total_sum + max_val - min_val + n;
    
    cout << (acc <= m ? "YES" : "NO") << "\n";
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