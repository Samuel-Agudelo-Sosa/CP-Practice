#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     int n, m; cin >> n >> m;
//     vector<vector<int>>lot(n, vector<int>(m,0));
//     vector<vector<int>>prefix_sum(n,vector<int>(m,0));
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m ; j++)
//         {
//             cin >> lot[i][j];
//             prefix_sum[i][j] = (j > 0 ? prefix_sum[i][j-1] + lot[i][j] : lot[i][j]);
//         } 
//     }
//     int a, b; cin >> a >> b;
//     int minimo = 3000;
//     int acc = 0;
//     if(a <= n && b <= m){
//         for(int i = 0; i + b - 1 < m; i++) {
            
            
//             for(int j = 0; j  + a - 1 < n; j++ )
//             {
//                 for(int k = 0; k < a ; k++)
//                 {

                    
//                     acc += (i > 0 ? prefix_sum[j + k][b-1 + i] - prefix_sum[j+k][i-1] : prefix_sum[j + k][b-1 + i]);
        
//                 } 
//                 minimo = min(minimo, acc);
//                 acc = 0;
//             }
        
//         }
//     }
//     int minimo2 = 3000;
//     acc = 0;
//     if(a != b && b <= n && a <= m){

//         for(int i = 0; i + a - 1 < m; i++) {
//             for(int j = 0; j  + b - 1 < n; j++ )
//             {
//                 for(int k = 0; k < b ; k++)
//                 {

//                     acc += (i > 0 ? prefix_sum[j + k][a-1 + i] - prefix_sum[j+k][i-1] : prefix_sum[j + k][a-1 + i]);
        
//                 } 
//                 minimo2 = min(minimo2, acc);
//                 acc = 0;
//             }
        
//         }
   
   
//     }

//      cout << min(minimo, minimo2);
    
// }
void solve() {
    int n, m; cin >> n >> m;
    int valor;
    vector<vector<int>>prefix_sum(n+1,vector<int>(m+1,0));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m ; j++)
        {
            cin >> valor;
            prefix_sum[i][j] = valor + prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1];
        } 
    }

    int a, b; cin >> a >> b;
    int minimo = 3000;

    if(a <= n && b <= m){
        for(int i = 1; i + a - 1 <= n; i++) {
            
            for(int j = 1; j  + b - 1 <= m; j++ )
            {
                minimo = min(minimo, prefix_sum[i + a - 1][j + b - 1] + prefix_sum[i-1][j-1] - prefix_sum[i + a -1][j-1] - prefix_sum[i-1][j + b - 1]);
            }
        
        }
    }

    if(a != b && b <= n && a <= m){

        for(int i = 1; i + b - 1 <= n; i++) {
            for(int j = 1; j  + a - 1 <= m; j++ )
            {
                minimo = min(minimo, prefix_sum[i + b - 1][j + a - 1] + prefix_sum[i-1][j-1] - prefix_sum[i + b - 1][j-1] - prefix_sum[i-1][j + a - 1]);
            }
        
        }
   
   
    }

     cout << minimo;
    
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