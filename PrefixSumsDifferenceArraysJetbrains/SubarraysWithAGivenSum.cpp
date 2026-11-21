#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, s; cin >> n >> s;
    long long suma_actual = 0, acc = 0;
    map<long long, int> freq;
    freq[0] = 1;
    for(int i = 0;i <n; i++){
        long long x;
        cin >> x;
        suma_actual += x;
        acc += freq[suma_actual - s];
        freq[suma_actual]++;
        
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