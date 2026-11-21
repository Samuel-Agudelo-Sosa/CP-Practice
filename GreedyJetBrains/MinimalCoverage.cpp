#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> intervalos(n);
    for (auto& i : intervalos) cin >> i.first >> i.second;
    
    sort(intervalos.begin(), intervalos.end());
    
    int corte = 0;
    int i = 0;
    int acc = 0;
    priority_queue<int> maxHeap;
    
    while (corte < m && i < intervalos.size()) {
        if (intervalos[i].first <= corte) {
            maxHeap.push(intervalos[i++].second);
        } else {
           
            if (maxHeap.empty() || maxHeap.top() <= corte) {
                cout << -1 << "\n";
                return;
            }
            corte = maxHeap.top();
            maxHeap.pop();
            acc++;
        }
    }
    
    
    if (corte < m && !maxHeap.empty() && maxHeap.top() > corte) {
        corte = maxHeap.top();
        maxHeap.pop();
        acc++;
    }
    
    if (corte >= m) cout << acc << "\n";
    else cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}