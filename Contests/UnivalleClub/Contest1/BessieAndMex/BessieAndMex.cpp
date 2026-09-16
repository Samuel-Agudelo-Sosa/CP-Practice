#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> arr(n,0);
    for(int& a : arr)cin >> a;
    vector<int> acc;
    int current_mex = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) {
            acc.push_back(current_mex);
            current_mex += arr[i];
        }
        else{
            int diferencia = current_mex - arr[i];
            acc.push_back(diferencia);

            }
    }
    
    for(int c : acc){
        cout << c << " ";
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