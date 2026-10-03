#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> nums(n,0);
    for(int &n : nums) cin>> n;
    sort(nums.begin(), nums.end(), greater<int>());
    vector<int>frecuencias(nums[0] + 1, 0);
    vector<int>norepetidos;
    int recordar = nums[0];
    for(int n: nums){
        frecuencias[n]++;
        if(n != recordar){
            norepetidos.push_back(recordar);
            recordar = n;
        }

    }
    norepetidos.push_back(recordar);
    while(n > 0){
         for(int r : norepetidos){
        if(frecuencias[r] > 0){
            cout << r << " ";
            frecuencias[r]--;
            n--;
        }
    }
    }
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