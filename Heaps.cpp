#include <bits/stdc++.h>
using namespace std;

void solve() {
    priority_queue<int> maxHeap;
    // priority_queue<int, vector<int>, greater<int>> minHeap; invierte el orden del comaprador
    maxHeap.push(5);
    maxHeap.push(3);
    maxHeap.push(8);
    cout << maxHeap.top() << "\n"; // 8
    maxHeap.pop();
    cout << maxHeap.top() << "\n"; // 5
    cout << maxHeap.size() << "\n"; // 2
    cout << maxHeap.empty() << "\n"; // 0 porque no está vacío

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