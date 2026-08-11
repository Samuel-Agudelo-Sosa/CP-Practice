#include <bits/stdc++.h>
using namespace std;

long long delta(){
    int k;
    cin >> k;
     long long c0,ck;
    cin >> c0;
    k--;
    while (k--) {
        cin >> ck;
    }
    return ck - c0;
}

void solve() {
    long long w, h;
    cin >> w >> h;
    long long deltax = max(delta(), delta());
    long long deltay = max(delta(), delta());
    cout << max(deltax * h, deltay * w) << "\n";
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