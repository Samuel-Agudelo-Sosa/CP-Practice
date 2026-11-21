#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int>numbers(n,0);
    for(int& number:numbers) cin >> number;
    sort(numbers.begin(), numbers.end());
    int i = 0, j = n-1;
    int acc = 0;
    while( i < j){
        if(numbers[i] + numbers[j] <= x) i++;
        j--;
        acc++;
    }
    if(i == j) acc++;
    cout << acc;

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