#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, w; cin >> n >> w;
    vector<pair<long long,long long>> p(n, {0,0});
    for(pair<long long,long long>& a_b : p) cin >> a_b.first >> a_b.second;
    sort(p.begin(), p.end(), greater<pair<long long,long long>>());
    long long acc = 0;
    for(pair<long long,long long>& a_b : p){
            if(w > 0) {
                long long efectivo = min(w, a_b.second);
                w -= efectivo;
                acc += a_b.first * efectivo;
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