#include <bits/stdc++.h>
using namespace std;

bool ordenarSesiones(tuple<long long,long long, long long>& s1, tuple<long long,long long, long long>&s2) {
    return get<1>(s1) < get<1>(s2);
}

void solve() {
    long long n; cin >> n;
    vector<tuple<long long,long long,long long>>sessions;
    for(long long i = 0; i < n; i++){
        long long dato1, dato2;
        cin >> dato1 >> dato2;
        sessions.push_back(make_tuple(dato1, dato2, i));
        
    } 
    sort(sessions.begin(), sessions.end(), ordenarSesiones);
    long long l =  get<0>(sessions[0]), r = get<1>(sessions[0]);
    long long acc = 1;
    vector<long long>solucion;
    solucion.push_back(get<2>(sessions[0]));
    for(long long i = 1; i < sessions.size(); i++){
        if(get<0>(sessions[i]) >= r) {
            acc++;
            l = get<0>(sessions[i]);
            r = get<1>( sessions[i]);
            solucion.push_back(get<2>(sessions[i]));
        }
    }
    cout << acc << "\n";
    for(long long i = 0; i < solucion.size();i++) {
        cout << solucion[i] + 1 << " ";
    }
  

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