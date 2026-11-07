#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<long long>numbers(n,0);
    for(long long& number: numbers) cin >> number;
    sort(numbers.begin(), numbers.end(), greater<long long>());
    sort(numbers.begin(), numbers.begin() + k);
    long long acc = numbers[0];
    int resultado = 1;
    for(int m = 1; m < numbers.size(); m++) {
        if (m * numbers[m] >= acc) resultado++;
        acc += numbers[m];
    }
    if(k == resultado) {
        cout << "YES" << "\n";
        for(long long& number: numbers) cout << number << " ";
    }
    else{
        cout << "NO";
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