#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;
    int izq = 0, der = n - 1;
    int acc = 0;
    while(izq < der){
        if(s[izq] != s[der]){
            if(s[izq] != c && s[der] !=c){
                acc += 2;
            }
            else{
                acc++;
            }
        }
        izq++;
        der--;
    }
    cout << acc << "\n";

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