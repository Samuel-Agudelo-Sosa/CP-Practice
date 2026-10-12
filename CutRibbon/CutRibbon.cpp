#include <bits/stdc++.h>
using namespace std;

int top_down(int n, int i, const vector<int> &sizes, vector<vector<int>> &dp){
    if(i >= sizes.size() || n < 0) return INT_MIN;
    if (n == 0) return 0;
    if (dp[i][n] != -1) return dp[i][n];
    int tomar = top_down(n - sizes[i], i, sizes, dp);
    if (tomar != INT_MIN) tomar++;
    return dp[i][n] = max(tomar, top_down(n, i + 1, sizes, dp) );
    

}

void solve() {
    int n; cin >> n;
    vector<int> sizes(3);
    for(int &s : sizes) cin >> s;
 
    vector<vector<int>> dp(3, vector<int>(n + 1, -1));
    cout << top_down(n, 0, sizes, dp);
   
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