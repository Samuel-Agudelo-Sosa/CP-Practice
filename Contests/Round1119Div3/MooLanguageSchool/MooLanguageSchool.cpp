#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string fields;
    cin >> fields;
    int acc = 0;
    int minimun = 0;
    int pos = 0;
    for(char s : fields){
        acc += (s == '1' ? 1 : 0);
        if ((pos+1) % k == 0){
            if (acc ==  k){
                minimun += 1;
            }
            acc = 0;

        }
        pos++;
    }
    cout << minimun << "\n";
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