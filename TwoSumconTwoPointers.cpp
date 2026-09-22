#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, target; cin >> n >> target;
    vector<pair<int,int>>numbers(n);
    for(int i = 0; i < n; i++){
         cin >> numbers[i].first;
         numbers[i].second = i;
    }
    sort(numbers.begin(), numbers.end());
    int i = 0, j = numbers.size() - 1;
    while(i < j){
        if(numbers[i].first + numbers[j].first == target){
            cout << numbers[i].second << " " << numbers[j].second;
            return;
        }
        else if(numbers[i].first + numbers[j].first < target){
            i++;
        }
        else{
            j--;
        }
    }
    cout << "none";
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