#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> nums = {2,1,5,1,3,2};
    int k = 3;
    
    int suma_actual = 0;
    for (int i = 0; i < k; i++){
        suma_actual += nums[i];
    }
    int maxima = suma_actual;

    for(int i = k; i < nums.size(); i++){
        suma_actual += nums[i] - nums[i-k];
        maxima = max(suma_actual, maxima);
    }

    cout << maxima << "\n";
;
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