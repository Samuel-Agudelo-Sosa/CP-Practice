#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    vector<int> deadBulbs(4);
    map<char, int> dic;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '!')
        {
            deadBulbs[i % 4] += 1;
        }
        else{
            dic[s[i]] = i % 4;
        }
    }
    cout << deadBulbs[dic['R']] << " " << deadBulbs[dic['B']] << " " << deadBulbs[dic['Y']] << " " << deadBulbs[dic['G']] << "\n"; 
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