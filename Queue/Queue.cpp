#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> queue(n);
    for(int& q: queue) {
        cin >> q;
    }
    sort(queue.begin(), queue.end());
    int acc = 0;
    long long contador = 0;
    for(int& q: queue) {
        if(acc <= q) {
            contador += 1;
            acc += q;
        }
        
    }
    cout << contador << "\n";
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