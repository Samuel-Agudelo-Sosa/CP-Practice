#include <bits/stdc++.h>
using namespace std;


void dfs(int nodo_inicial, vector<vector<int>>& adj, vector<bool>& visitado) {
    visitado[nodo_inicial] = true;
    cout << nodo_inicial << " -> ";
    for(int v : adj[nodo_inicial]) {
        if(!visitado[v]){
            dfs(v, adj, visitado);
        }
    }

}

void bfs(int nodo_inicial, vector<vector<int>>& adj, vector<bool>& visitado) {
    queue<int> q;
    int current_node = 0;
    q.push(nodo_inicial);
    visitado[nodo_inicial] = true;
    while(!q.empty()){
        current_node = q.front();
        q.pop();
        cout << current_node << " ";
        for(int v : adj[current_node]){
            if(!visitado[v]){
                visitado[v] = true;
                q.push(v);
            }
        }
    }

}




void solve() {
    int n, ganador, perdedor;
    cin >> n;
    vector<vector<int>> adj(n+1);
    for(int i = 1; i <= (n * (n - 1)) / 2; i++){
      
        cin >> ganador >> perdedor;
        adj[ganador].push_back(perdedor);
    }
    vector<bool> visitado(n+1, false);
    dfs(4, adj, visitado);
    fill(visitado.begin(), visitado.end(), false);
    cout << endl;
    bfs(4, adj, visitado);
    
 

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