#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    vector<pair<int,int>>task(n);
    for(auto& t : task) cin >> t.first >> t.second;
    sort(task.begin(), task.end());
    long long acc=0, suma=0;
    for(auto& t : task) {
        suma += t.first;
        acc += t.second - suma;
    }
    cout << acc;

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