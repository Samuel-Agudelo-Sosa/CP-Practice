#include <bits/stdc++.h>
using namespace std;

void solve() {
  
    int n, m, q; cin >> n >> m >> q;
    vector<long long>numbers(n, 0);
    for(long long& num : numbers) cin >> num;
    vector<long long>differences(n,numbers[0]);
    for(size_t i = 1; i < n; i++) {
        differences[i] = numbers[i] - numbers[i-1];
    }
    while(m--){
        int l, r, x; cin >> l >> r >> x;
        differences[l-1] += x;
        if(r < n) differences[r] -= x;
    }

    for(size_t i = 1; i < n ; i++) {
        differences[i] += differences[i-1];
    
    }

    vector<long long>prefix(n+1 ,0 );
    for(size_t i = 1; i <= n ; i++) {
        prefix[i] +=  differences[i-1] + prefix[i-1];
    }

    while(q--){
        int l, r; cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << "\n";

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