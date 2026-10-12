#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int maximo = 1;
    int acc = 1;
    vector<int>nums(n);
    for(int &num : nums) cin >> num;
    for(int i = 0; i < n - 1; i++){
        if(nums[i] < nums[i+1]) acc++;
        else acc = 1;
        maximo = max(maximo, acc);
    }
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