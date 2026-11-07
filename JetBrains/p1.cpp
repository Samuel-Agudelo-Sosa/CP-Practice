#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> numbers(n, 0);
    for(long long& number : numbers) cin >> number;

    vector<long long> prefix(n);
    prefix [0] = numbers[0];
    cout << prefix[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + numbers[i];
         cout << " " << prefix[i];
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
