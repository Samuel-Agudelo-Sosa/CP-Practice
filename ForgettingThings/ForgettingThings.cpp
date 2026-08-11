#include <bits/stdc++.h>
using namespace std;

void solve() {
    int da, db;
    cin >> da >> db;

    if (da == db) {
        cout << da * 10 << " " << da * 10 + 1;
    }
    else if (da + 1 == db) {
        cout << da * 10 + 9 << " " << 10 * db;
    }
    else if (da == 9 && db == 1) {
        cout << 99 << " " << 100;
    }
    else {
        cout << -1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}