#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    (s.size() > 10 ? cout << s[0] << s.size()-2 << s.back() : cout << s);
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