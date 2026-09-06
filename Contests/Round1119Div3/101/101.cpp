#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> integers(n);
    
    for(int& a : integers){
        cin >> a;
    }
    int posi=-1, posd=n;
    for(int i = 0; i < n; i++){ 
        if (integers[i] == 1){
            posi = i;
        }
        if (integers[(n-1)-i] == 1){
            posd = (n-1) - i;
        }
        if (integers[i] == -1){
            if(posi == -1){
                integers[i] = 1;
                posi = i;
            }
        }
        if (integers[(n-1)-i] == -1){
            if(posd == n){
                integers[(n-1)-i] = 1;
                posd = (n-1)-i;
            }
        }
    }

    for(int a : integers){
        cout << (a == -1 ? 0 : a) << " ";
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