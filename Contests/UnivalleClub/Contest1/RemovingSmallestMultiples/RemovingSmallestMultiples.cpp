#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string tstring(n, ' ');
    for(char& t : tstring)cin >> t;
    long long costo = 0;
    for (int i = 0; i < n; i++){
        if (tstring[i] == '1'){
            continue;
        }
        else if(tstring[i] == '2'){
            int valor = i + 1;
            for(int j = 2; j <= n / valor; j++ ){
                if(tstring[valor * j - 1] == '0'){
                    costo += valor;
                    tstring[valor * j - 1] = '2';

                }
                else if (tstring[valor * j - 1] == '1'){
                    break;
                }
            }


        }
        
        else{
            int valor = i + 1;
            costo += valor;
            for(int j = 2; j <= n / valor; j++ ){
                if(tstring[valor * j - 1] == '0'){
                    costo += valor;
                    tstring[valor * j - 1] = '2';

                }
                else if (tstring[valor * j - 1] == '1'){
                    break;
                }
            }
        
        }
    }
    cout << costo << "\n";

}

int main() {
    // Optimización de entrada/salida para CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; // Descomentar si hay múltiples casos de prueba
    while(t--) {
        solve();
    }
    return 0;
}