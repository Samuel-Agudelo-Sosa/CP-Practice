#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<int>>teams(n,vector<int>(2,0));
    vector<int>frecuency((int)1e5 +1,0);
    for(auto& t : teams){
        for(auto& c : t)  cin >> c;
        frecuency[t[0]]++;
    }
     for(auto& t : teams){
        cout << n - 1 + frecuency[t[1]] << " " << n - 1 - frecuency[t[1]] << "\n";
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