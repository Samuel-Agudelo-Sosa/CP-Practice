#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> oponent(n, 0);
    for(int& number : oponent) cin >> number;
    int pos = 0;
    sort(oponent.begin(), oponent.end());
    vector<int> mine;
    for(int i = 1; i <= 2 *n;  i++) {
      if(pos < n  && i == oponent[pos]) pos++;
      else mine.push_back(i);
    }

    int i = 0, j = 0;
    int wins = 0;
    while(j < n){
        if(mine[j] > oponent[i]){
            i++;
            wins++;
        }
        j++;
    }
    cout << wins;
    
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