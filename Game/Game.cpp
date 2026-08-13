#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> numbers(n);
     for (int &x : numbers) {
        cin >> x;
    }
sort(numbers.begin(), numbers.end());
int idx = (n - 1) / 2;
cout << numbers[idx] << "\n";
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