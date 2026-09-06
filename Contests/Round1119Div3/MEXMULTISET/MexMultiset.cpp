#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> integers(n);
    for(int& a : integers){
        cin >> a;
    }
    sort(integers.begin(), integers.end());
    int mexa = 0, mexb = 0, mexc = 0;
    int turno = 1;
    string acc(n, '0');
    vector<int> sets(3);
    for(int&a : integers){
        if (turno == 1) {
             if (a <= mexa) {
                if (sets[0] != 0){
                        mexa++;
                }
                turno++;
             } else {
                sets[0] = a;

             }
        }
         if (turno == 2) {
             if (a <= mexb) {
                if(sets[1] != 0){
                        mexb++;
                }
                
                turno++;
             } else {
                sets[1] = a;
             }
        }
         if (turno == 3) {
             if (a <= mexc) {
                if (sets[2] != 0){
                        mexc++;
                }
                turno = 1;
             } else {
                sets[2] = a;
             }
        }
       
    }
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