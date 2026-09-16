#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> permutation(n);
    for(int& p: permutation) cin >> p;
    vector<int> acc;
    for(int i = 0; i < n; i++){
        if(permutation[i] != i+1){
            acc.push_back(permutation[i]);
        }
    }
    if(acc.size() > 1){
            for (int i = 0; i < acc.size() - 1; i++){
        if(acc[i] <= acc[i+1]){
            cout << "NO" << "\n";
            return;
        }
    }
    }

    cout << "YES" << "\n";

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