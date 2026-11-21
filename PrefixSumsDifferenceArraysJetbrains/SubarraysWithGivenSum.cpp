#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    map<long long, long long>frequencys;
    frequencys[0] = 1;
    long long suma_actual = 0, acc = 0;
    while(n--){
        long long dato; cin >> dato;
        suma_actual += dato;
        long long operacion = ((suma_actual % k) + k) % k;
        acc += frequencys[operacion];
        frequencys[operacion]++;
    
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