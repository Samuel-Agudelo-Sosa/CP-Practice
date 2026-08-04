#include <bits/stdc++.h>

using namespace std;

int main(){
    int limite = 3;
    double factor = 2.5;
    string saludo = "Procesando...";
    bool activo = true;
    cout << saludo << "\n";
    cout << "Ingresa un numero: ";
    int num;
    cin >> num;
    vector<int> numeros;
    map<int, string> diccionario;

    for (int i = 0; i < limite; i++) {
        int valor = num + i;
        numeros.push_back(valor);

        if (valor % 2 == 0) {
            diccionario[valor] = "Par";
        } else {
            diccionario[valor] = "Impar";
        }
    }

    cout << "Números procesados:\n";
    int idx = 0;
    while (idx < numeros.size()) {
        cout << "Numero: " << numeros[idx] << "\n";
        idx++;
    }
    cout << "Diccionario de numeros:\n";
    for (const auto& par : diccionario) {
        cout << "Numero: " << par.first << ", Tipo: " << par.second << "\n";
    }

    return 0;
}