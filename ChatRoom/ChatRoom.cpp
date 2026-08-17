#include <bits/stdc++.h>
using namespace std;

void solve() {
    string referencia = "hello";
    int pos = 0;

    string s;
    cin >> s;

    for (char c : s) {
        if (pos == referencia.size()) {
            break;
        }
        if (c == referencia[pos]) {
            pos++;
        }
    }

    // Agregar '\n' asegura que el buffer de salida se envíe correctamente
    cout << (pos == referencia.size() ? "YES" : "NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}