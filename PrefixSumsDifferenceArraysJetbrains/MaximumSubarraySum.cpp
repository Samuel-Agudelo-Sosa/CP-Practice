#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long>numbers(n,0);
    for(long long& number:numbers) cin >> number;
    long long maximo=numbers[0], acc = numbers[0];
    for(int i = 1; i < numbers.size(); i++){
        acc = max(acc + numbers[i], numbers[i]);
        maximo = max(maximo, acc);
    }
    cout << maximo;
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