#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     string s;
//     cin >> s;
//     int acc = 0;
//     for(char c : s){
//         if (int(c) <= 90) {
//             acc++;
//         }
    
//     }
    
//     if(acc == s.size() || acc == s.size() - 1 && int(s[0]) > 90){
//         for(char& c : s)
//         {
//             c = (int(c) > 90 ?  char(int(c) - 32) : char(int(c) + 32));
//         }
//     }
//     cout << s;


// }


using namespace std;

void solve() {
    string s;
    cin >> s;
    
    // La regla se cumple si TODAS las letras desde el índice 1 en adelante son MAYÚSCULAS.
    // El caso de la primera letra (índice 0) no importa para decidir si aplicamos la regla o no.
    bool apply_rule = true;
    for (size_t i = 1; i < s.length(); ++i) {
        if (islower(s[i])) {
            apply_rule = false;
            break; // Short-circuit: Apenas vemos una minúscula, cancelamos y salimos.
        }
    }
    
    // Si aplica la regla, invertimos los casos
    if (apply_rule) {
        for (char &c : s) {
            c = isupper(c) ? tolower(c) : toupper(c);
        }
    }
    
    cout << s << "\n";
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