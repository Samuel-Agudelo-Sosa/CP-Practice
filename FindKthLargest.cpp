#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; cin >> k;
    int n; cin >> n;
    vector<int> nums(n,0);
    for(auto &c : nums) cin >> c;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int num: nums){
        minHeap.push(num);
        if(minHeap.size() > k) minHeap.pop();
    }
    cout << minHeap.top();

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