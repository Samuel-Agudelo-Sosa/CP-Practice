#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> numbers(n);
    for(int &number : numbers) cin >> number;
    if(numbers[0] != -1 && numbers[n - 1] == -1) numbers[n - 1] = numbers[0];
    else if(numbers[0] == -1 && numbers[n-1] != -1) numbers[0] = numbers[n - 1];
    else if(numbers[0] == -1 && numbers[n - 1] == -1){
        numbers[0] = 0;
        numbers[n - 1] = 0;
    }
    for (int &number : numbers) number = (number == -1) ? 0 : number;
    cout << abs(numbers[0] - numbers[n -1]) << "\n";
    for (int number : numbers) cout << number << " ";
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