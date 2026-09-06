#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     int n, q;
//     cin >> n >> q;
//     vector<int> prices(n);
//     for(int& p : prices){
//         cin >> p;

//     }
//     sort(prices.begin(), prices.end(), [](int a, int b){
//         return a > b;
//     });
//     vector<pair<int,int>> parameters(q);
//     for(auto& p : parameters){
//         cin >> p.first >> p.second;
//     }

//     long long acc = 0, i = 0;
//     vector<long long> prefix_sum(n);
//     for(auto& p: prefix_sum){
//         acc += prices[i];
//         i++;
//         p = acc;
//     }
    
//     for(auto& p: parameters){
//         long long result = 0;
//         result = prefix_sum[p.first - 1] - (p.first != p.second ? prefix_sum[p.first - 1 - p.second] : 0);
//         cout << result << "\n";
//     }

// }

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<int> prices(n);
    for(int& p : prices) {
        cin >> p;
    }

    sort(prices.begin(), prices.end(), greater<int>());

    // 2. Prefix sum "1-indexed": El tamaño es n+1 y empieza con 0.
    vector<long long> pref(n + 1, 0);
    for(int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + prices[i];
    }
    
    // 3. Optimización espacial: Procesamos las consultas "al vuelo" (on-the-fly).
    while(q--) {
        int x, y;
        cin >> x >> y;
        
        // Al usar prefix sum en 1-index, el total de los primeros 'x' es pref[x].
        // Y el total justo antes del rango que nos interesa es pref[x - y].
        // Adiós a las validaciones de límites (ternarios).
        cout << pref[x] - pref[x - y] << "\n";
    }
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