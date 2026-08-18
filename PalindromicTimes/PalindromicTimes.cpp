#include <bits/stdc++.h>
using namespace std;

// void solve() {
//     string s;
//     cin >> s;
//     int h = 0, m = 0;
//     h = (stoi(s.substr(3,2)) == 59 ? (stoi(s.substr(0,2)) + 1) % 24 : stoi(s.substr(0,2)));
//     m = (stoi(s.substr(3,2)) + 1) % 60;
//     while(h == (m % 10)*10 + (m - m%10) / 10){
//         h = (m == 59 ? (h+1) % 24 : h);
//         m = (m + 1) % 60;
    
//     }

//     cout << (h >= 0 && h <= 9 ? '0' + to_string(h) : to_string(h)) << ":" << (m >= 0 && m <= 9 ? '0' + to_string(m) : to_string(m));
// }

void solve() {
    int h, m;
    char colon;
    cin >> h >> colon >> m;

    // Avanzamos 1 minuto inicial
    h = (m == 59 ? (h + 1) % 24 : h);
    m = (m + 1) % 60;

    // Repetimos MIENTRAS NO sea palíndromo (!=)
    while (h != (m % 10) * 10 + (m / 10)) {
        h = (m == 59 ? (h + 1) % 24 : h);
        m = (m + 1) % 60;
    }

    // Formateo de salida con 2 dígitos
    cout << (h < 10 ? "0" : "") << h << ":" 
         << (m < 10 ? "0" : "") << m << "\n";
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