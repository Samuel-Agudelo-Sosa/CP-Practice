#include <bits/stdc++.h>
using namespace std;

void invertirLista() {
    string s; cin >> s;
    int i = 0, j = s.size() - 1;
    string acc = s;
    while(i < j){
       swap(s[i], s[j]);
       i++;
       j--;
    }
    cout << s;

}

void DesplazarCeros(){
    int n; cin >> n;
    vector<int>numeros(n,0);
    for(int& n:numeros) cin >> n;
    int escritor = 0;
    for (int lector = 0; lector < n; lector++){
        if(numeros[lector] != 0){
            swap(numeros[escritor], numeros[lector]);
            escritor++;
        }
    }
    for(int n : numeros) cout << n;
}

void EliminarDuplicados(){
    int n; cin >> n;
    vector<int>numeros(n,0);
    for(int& n:numeros) cin >> n;
    int escritor = 0;
    for(int lector = 1; lector < n; lector++){
        if(numeros[lector] != numeros[escritor]){
            escritor++;
            numeros[escritor] = numeros[lector];   
        }
        
    }
    cout << escritor + 1;
}

int main() {
    // Optimización de entrada/salida para CP
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    invertirLista();
    DesplazarCeros();
    EliminarDuplicados();
    
    return 0;
}