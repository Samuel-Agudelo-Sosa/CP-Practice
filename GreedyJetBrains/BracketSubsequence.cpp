#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    stack<int> elements;
    string acc(s.size(), ' ');
    int apertura = 0, cierre = 0;
    int k = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') {
            elements.push(i);
            apertura++;
        }
        else {
            if(cierre < apertura){
                cierre++;
                acc[i] = ')';
                acc[elements.top()] = '(';
                elements.pop();
                k += 2;
            }
        }

    }
    cout << k << "\n";
    acc.erase(remove(acc.begin(), acc.end(), ' '), acc.end());
    if( k > 0) cout << acc;
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