#include <bits/stdc++.h>
using namespace std;


struct Node {
    int l, r, md;
    Node* left = nullptr;
    Node* right = nullptr;
    long long val;

 

    Node(vector<long long>& v, int le, int ri) {
        l = le;
        r = ri;
        md = l + (r - l ) / 2;
        if (l == r){ 
            val = v[l];
            return;
        }
        left = new Node(v, l, md);
        right = new Node(v, md + 1, r);
        val = left->val + right->val;
    }

    void update(int idx, long long value){
        if (l == r) {
            val = value;
            return;
        }
        if(idx <= md){
            left->update(idx, value);
        }
        else{
            right->update(idx,value);
        }
        val = left->val + right->val;
    }

    long long query(int ql, int qr){
        if (r < ql || l > qr)    return 0;
        
        else if (ql <= l && qr >= r) return val;
        
        return left->query(ql, qr) + right->query(ql, qr);
        
    }


    ~Node() {
        delete left;
        delete right;
    }
    
};



void solve() {
    int n, m; 
    cin >> n >> m;
    vector<long long>numbers(n);
    for(long long& number : numbers) cin >> number;
    Node* root = new Node(numbers, 0, n - 1);
    while(m--){
        int opt;
        cin >> opt;
        int dato1, dato2;
        cin >> dato1 >> dato2;
        if(opt == 1)  root->update(dato1, dato2);
        else cout << root->query(dato1, dato2 - 1) << "\n";
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