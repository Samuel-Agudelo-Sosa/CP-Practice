#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> nums(n);
    for(int &num: nums) cin >> num;

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int num : nums){
        // 1. Inserción
        if(maxHeap.empty() || num <= maxHeap.top()){
            maxHeap.push(num);
        } else {
            minHeap.push(num);
        }

        // 2. Rebalanceo (Seguro contra underflow)
        if(maxHeap.size() > minHeap.size() + 1){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        if(minHeap.size() > maxHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }

        // 3. Resultado
        cout << "promedio: ";
        if(maxHeap.size() == minHeap.size()){
            cout << (maxHeap.top() + minHeap.top()) / 2.0 << "\n";
        } else {
            cout << maxHeap.top() << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}