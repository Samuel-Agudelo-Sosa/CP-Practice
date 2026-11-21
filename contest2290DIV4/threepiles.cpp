#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    vector<int>stones(3);
    for(auto& s : stones) cin >> s;
    sort(stones.begin(), stones.end());
    if (stones[1] - 1 == stones[0] && stones[2] - 1 == stones[1]) cout << "yes";
    else cout << "no";
    cout << "\n";
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