#include <bits/stdc++.h>
using namespace std;


void dfs(int nodo_inicial, vector<vector<int>>& adj, vector<bool>& visitado) {
    visitado[nodo_inicial] = true;
    cout << nodo_inicial << " ";
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

bool visitar(int destino, int objetivo, vector<vector<int>>& adj, vector<bool>& visitado ) {
    visitado[destino] = true;
    for(int v : adj[destino]){
        if(visitado[v]){
            continue;
        }
        else if(v == objetivo){
            return true;
        }
        else{
            if(visitar(v, objetivo, adj, visitado)) {
                return true;
            } 
        }
    }
    return false;
}


void solve() {
    int n, ganador, perdedor;
    cin >> n;
    vector<vector<int>> adj(n+1);
    vector<int> partidos_jugados(n+1);
    for(int i = 1; i <= (n * (n - 1)) / 2  - 1; i++){
      
        cin >> ganador >> perdedor;
        adj[ganador].push_back(perdedor);
        partidos_jugados[ganador]++;
        partidos_jugados[perdedor]++;
    }
    int u = 0, v = 0;
    for(int i = 1; i <= n; i++){
         if(partidos_jugados[i] == n - 2){
            (u == 0 ? u = i : v = i);
         }
    }
    vector<bool> visitado(n+1);
    bool ganador_u = visitar(u, v, adj, visitado );
    if(ganador_u){
        cout << u << " " <<  v;
    }
    else{
    
        cout << v << " " << u;
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