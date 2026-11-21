#include <bits/stdc++.h>
using namespace std;


int winner(char a, char b){
    if (a == 'H' && b == 'S') return 1;
    else if (a == 'S' && b == 'P') return 1;
    else if (a == 'P' && b == 'H') return 1;
    return 0;

}

void solve() {
    int n; cin >> n;
    vector<char>fight(n);
    for(char& f: fight) cin >> f;   
    vector<int>h(n, winner('H',fight[0]));
    for(int i = 1; i < n; i++) h[i] = winner('H', fight[i]) + h[i-1];
    vector<int>p(n, winner('P',fight[0]));
    for(int i = 1; i < n; i++) p[i] = winner('P', fight[i]) + p[i-1];
    vector<int>s(n, winner('S',fight[0]));
    for(int i = 1; i < n; i++) s[i] = winner('S', fight[i]) + s[i-1];
    int maximo = 0;
    for(int i = 0; i < n; i++) maximo = max(maximo, max(h[i] + p[n-1] - p[i], h[i] + s[n-1] - s[i]));
    for(int i = 0; i < n; i++) maximo = max(maximo, max(p[i] + h[n-1] - h[i], p[i] + s[n-1] - s[i]));
    for(int i = 0; i < n; i++) maximo = max(maximo, max(s[i] + p[n-1] - p[i], s[i] + h[n-1] - h[i]));
    cout << maximo;
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