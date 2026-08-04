#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n, m;
   cin >> n >> m;
   string a,b;
   cin >> a >> b;
   int contador = 0;
   while(n >= m && a[contador] != b[0] ){
    contador++;
    n--;
   }
   if(n < m) {
    cout << "NO";
   }
   else{
    int posicion = a.size() - b.size();
    a[posicion] = a[contador];
    (a.substr(posicion, b.size()) == b ? cout << "YES" : cout << "NO");
   }
   cout << "\n";

}

int main() {
    // Optimización de entrada/salida para CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Descomentar si hay múltiples casos de prueba
    while(t--) {
        solve();
    }
    return 0;
}