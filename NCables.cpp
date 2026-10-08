#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void solve() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i = 0; i < n; i++){
        int dato; cin >> dato;
        minHeap.push(dato);
    }
    int acc = 0;
    for(int i = 0; i < n - 1; i++){
        int a = minHeap.top(); minHeap.pop();
        int b = minHeap.top(); minHeap.pop();
        
        int costo_actual = a + b; // La longitud del nuevo cable
        acc += costo_actual;      // El acumulado de costo de energía
        
        minHeap.push(costo_actual); // Metes el NUEVO CABLE, no el acumulado
    }
    
    cout << acc;
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