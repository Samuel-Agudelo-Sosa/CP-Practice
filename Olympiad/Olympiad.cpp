#include <bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin >> n;
    vector<int> puntajes (n);
    for (int& p : puntajes) {
        cin >> p;
    }

    sort(puntajes.begin(), puntajes.end());
    int acc=0, repetido = 0;
    for(int n : puntajes){
        if (n != repetido)
        {
            acc++;
            repetido = n;
        }
    }
    cout << acc << "\n";

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