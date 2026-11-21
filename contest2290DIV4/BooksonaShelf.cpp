#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int>v(n);
    for(auto& s : v) cin >> s;
    sort(v.begin(), v.end());
    vector<int>respuesta(n,v[0]);
    if(n == 1){
        cout << 1 << "\n" << respuesta[0] << "\n";
        return;
    }
    int i = 1, j = n-2;
    respuesta[n-1] = v[1];
    int counter = 2;
    while(i < j){
        respuesta[i++] = v[counter++];
        respuesta[j--] = v[counter++];
    }
    if(n % 2 != 0) respuesta[(n-1) / 2] = v[n-1];
    int acc = 2;
    for(int i = 1; i < respuesta.size() - 1; i++){
        if(respuesta[i] > respuesta[i-1]) acc++;
        if(respuesta[i] > respuesta[i+1]) acc++;
        if(respuesta[i] > respuesta[i-1] && respuesta[i] > respuesta[i+1]) acc--;
    }
    cout << acc << "\n";
    for(auto& s : respuesta) cout << s << " ";
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