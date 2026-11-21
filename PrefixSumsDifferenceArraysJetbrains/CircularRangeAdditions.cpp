#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m; cin >> n >> m;
    vector<long long> datos(n+1, 0);
    vector<long long>diff_array(n+2, 0);
    for(int i = 1; i <= n; i++) cin >> datos[i];
    for(int i = 1; i <= n; i++) diff_array[i] = datos[i] - datos[i-1];
    while(m--){
        int l, r; cin >> l >> r;
        long long x; cin >> x;
        if ( l > r){
            diff_array[1] += x;
            diff_array[n+1] -= x;
           
        } 
        diff_array[l] += x;
        diff_array[r+1] -= x;
    }
    for(int i = 1; i <= n; i++) diff_array[i] += diff_array[i-1];
    for(int i = 1; i <= n; i++) cout << diff_array[i] << " ";
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