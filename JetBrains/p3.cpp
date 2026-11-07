#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<long long> numbers(n, 0);
    for(long long& number : numbers) cin >> number;

    vector<long long> prefix(n+1);
    prefix [0] = 0;
    for(int i = 1; i <= n; i++){
        prefix[i] = prefix[i - 1] ^ numbers[i-1];
    }
    int dato1 = 0, dato2 = 0; 
    while(q--){
      cin >> dato1 >> dato2;
      cout << (prefix[dato2] ^ prefix[dato1 - 1]) << "\n";
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
