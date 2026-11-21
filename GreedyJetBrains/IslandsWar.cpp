#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int,int>>v;
    while(m--){
        int dato1, dato2; cin >> dato1 >> dato2;
        v.push_back({dato2, dato1});
    }
    sort(v.begin(), v.end());
    int acc = 0;
    int corte = -1;
    for(auto& intervalo : v){
            if(intervalo.second > corte) {
                acc++;
                corte = intervalo.first - 1;
            }
            
        }
        cout << acc;

    

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