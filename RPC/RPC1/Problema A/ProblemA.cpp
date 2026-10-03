#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, acc;
    acc = 0;
    cin >> n >> k;
    map <char, int> frequency;
    vector<string> palabras(n, "");

    for (auto &p : palabras) cin >> p;

    for(auto &p: palabras){
        for(auto &c : p){
            if((int)c - (acc % 26) < 97){
                c = (int)c - (acc % 26)  +  26;
            }
            else{
                c = (int)c - (acc % 26);
            }
         
            frequency[c]++;
            if (frequency[c] % k == 0) {
                acc++;
            }
        }
    }
    
    for(int i = 0; i < n - 1 ; i++){
        cout << palabras[i] << " ";
    }
    cout << palabras[n - 1];
    cout << "\n";

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