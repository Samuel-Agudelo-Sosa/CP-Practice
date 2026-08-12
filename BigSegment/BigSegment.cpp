#include <bits/stdc++.h>
using namespace std;

/*

void solve() {
    int n, pos = -1, minimo = INT_MAX, maximo = INT_MIN;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int li, ri;
        cin >> li >> ri;
        
        // Expresividad: Si los límites se expanden MÁS ALLÁ del segmento actual,
        // el candidato anterior ya no sirve.
        if (li < minimo || ri > maximo) {
            pos = -1; 
        }
        
        minimo = min(minimo, li);
        maximo = max(maximo, ri);
        
        // Si este segmento abarca todo el rango actual, ¡es el nuevo rey!
        if (li == minimo && ri == maximo) {
            pos = i + 1;
        }
    }
    
    cout << pos << "\n";
}
*/

void solve() {
    int n, pos=-1, minimo = INT_MAX, maximo = INT_MIN;
    bool mismoCandidato = false;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int li, ri;
        cin >> li >> ri;
        mismoCandidato = li >= minimo && ri <= maximo;
        if (!mismoCandidato) {
            pos = -1;
        }
        minimo = min(li, minimo);
        maximo = max(ri, maximo);
        if (li == minimo && ri == maximo) {
            pos = i +  1;
            mismoCandidato = true;
        }

    }
    pos = mismoCandidato ? pos : -1;
    cout << pos;
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