#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> cubes(3,vector<int>(10,0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 6; j++){
            int dato;
            cin >> dato;
            cubes[i][dato]++;
        }
    }


    int x = 0;
    for(int i = 1; i < 10; i++){
            if(cubes[0][i] != 0 || cubes[1][i] != 0 || cubes[2][i] != 0){
                x++;
            }
            else{
                cout << x;
                return;
            }
    }

       for(int i = 10; i < 100; i++){
            int a = i / 10;
            int b = i % 10;
            if((cubes[0][a] != 0 && (cubes[1][b] != 0 || cubes[2][b] != 0)) || (cubes[1][a] != 0 && (cubes[0][b] != 0 || cubes[2][b] != 0)) || (cubes[2][a] != 0 && (cubes[0][b] != 0 || cubes[1][b] != 0))){
                x++;
            }
            else{
                cout << x;
                return;
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