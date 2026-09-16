#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n){
    vector<int> factors;
    for (int i = 2; i*i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}


void solve() {
    int n; cin >> n;
    int k; cin >> k;
    vector<int> a(n);
    long long acumulador = 1;
    for(int& x : a){
        cin >> x;
        acumulador *= x;
    }
    if (2023 % acumulador == 0) {
        cout << "YES\n";
       vector<int> result = primeFactors(2023 / acumulador);
       if (result.size() <= k) {
        for(int i = 0; i < result.size(); i++){
            cout << result[i] << " ";
        }
        for(int i = 0; i < k - result.size(); i ++) {
            cout << 1 << " ";
        }
       }
       else{
        int acumulador2 = 1;
        for(int i = 0; i < result.size() - k + 1; i++){
            acumulador2 *= result[i];
        }
        cout << acumulador2 << " ";
        for(int i = result.size() - k + 1; i < result.size(); i++){
            cout << result[i] << " ";
        }
       }
       
    } 
    else {
        cout << "NO";
    }
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