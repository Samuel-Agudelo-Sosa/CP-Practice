#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    vector<int> numbers;
    for(char c : s) numbers.push_back(c - '0');
    int pasos1 = 0, pasos2 = 1;
    sort(numbers.begin() + 1, numbers.end());
    if(numbers.size() == 1){
        cout << 0;
    }
    else{
        int acc = numbers[0];
        for(int i = 1; i < numbers.size(); i++){
            acc += numbers[i];

            if(acc >= 10){
                pasos1 = numbers.size() - i; 
                break;
            }
        }
        acc = 0;
        numbers[0] = 1;
        for(int i = 0; i < numbers.size(); i++){
            acc += numbers[i];

            if(acc >= 10){
                pasos2 = numbers.size() - i + 1; 
                break;
            }
        }
        cout << min(pasos1, pasos2);

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