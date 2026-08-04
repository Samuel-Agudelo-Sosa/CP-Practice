#include <bits/stdc++.h>
using namespace std;

//solución ingenua
/*
void solve() {
    int k, q;
    cin >> k >> q;
    vector<int> numerosSecuencia;
    for (int i = 0; i < k; i++) {
        int valor;
        cin >> valor;
        numerosSecuencia.push_back(valor);
    } 
    vector<int> numerosJugadores;
    for (int i = 0; i < q; i++) {
        int valor;
        cin >> valor;
        numerosJugadores.push_back(valor);
    } 
    vector<int> resultado;
    for (const auto& n : numerosJugadores){
        int n_ = n;
        int winners = n;
        while(n_ >= numerosSecuencia[0])
        {
            for (const auto& a : numerosSecuencia){
            if (a <= n_){
                winners--;
            }
            else{
                break;
            }
        }
            if(n_ == winners){
                break;
            }
            else{
                n_ = winners;
            }
        }
        resultado.push_back(winners);   
    }
    
    for (int i = 0; i < resultado.size(); i++) {
        cout << resultado[i] << (i == resultado.size() - 1 ? "" : " ");
    }
    cout << "\n";

}
*/

void solve() {
    int k, q;
    cin >> k >> q;
    int primerElemento;
    cin >> primerElemento;
    for (int i = 1; i < k; i++) {
        int basura;
        cin >> basura; // Leer y descartar los elementos restantes
    }
    for (int i = 0; i < q; i++) {
        int n;
        cin >> n;
        cout << min(n, primerElemento - 1) << (i == q - 1 ? "" : " ");
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