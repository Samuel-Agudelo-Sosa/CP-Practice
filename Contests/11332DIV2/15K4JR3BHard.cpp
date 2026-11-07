#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n; cin >> n;
    vector<long long> numbers(n,0);
    for(long long& number : numbers) cin >> number;
    sort(numbers.begin(), numbers.end(), greater<long long>());
    long long a = 0, b= 0;
    for(long long number : numbers){
            if( a <= b) a +=  pow(2,number);
            else b += pow(2,number);
    }
    cout <<  a * b <<  "\n";

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