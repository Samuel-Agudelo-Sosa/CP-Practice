#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;  
    vector<int>nums(n,0);
    for(int &num: nums) cin >> num;
    vector<int>prefix_sum(n,0);
    prefix_sum[0] = nums[0];
    for(int i = 1; i < n; i++){
        prefix_sum[i] = nums[i] + prefix_sum[i-1];
    }
    for(int i = 0; i < q; i++) {
        int option; cin >> option;
        int dato1,dato2; cin >> dato1 >> dato2;
        if(option == 2){
            cout << prefix_sum[dato2 - 1] - prefix_sum[dato1 - 2] << "\n";
        }
        else{
            nums[dato1 - 1] = dato2; 
            for(int i = dato1 - 1; i < n; i++){
              prefix_sum[i] = nums[i] + prefix_sum[i-1];
            }
        }
    }

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