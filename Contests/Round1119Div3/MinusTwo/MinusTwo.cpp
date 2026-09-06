#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> integers(n);
    for(int& a : integers){
        cin >> a;
    }
    int impares = 0;
    int pares_cicloimpar = 0;
    int pares_cilopar = 0;
    for(int a : integers){ 
        if(a % 2 == 0){
            ((a / 2) % 2 == 0 ? pares_cilopar++ : pares_cicloimpar++);
        }
        else{
            impares++;
        }

    }

    cout << max({impares, pares_cicloimpar,  pares_cilopar}) << "\n";
    
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