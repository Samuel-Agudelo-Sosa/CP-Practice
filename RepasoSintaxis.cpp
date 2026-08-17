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

    //auto es para deducir el tipo de variable automáticamente
    //hay 3 tipos de recorridos for basados en rangos, auto, auto& y auto const&
    //auto crea una copia de cada elemento
    //auto& crea un puntero (8 bytes) a cada elemento, permite modificarlo
    //const auto& crea un puntero (8 bytes) a cada elemento, no permite modificarlo gracias al const

    //auto es mejor para primitivos que pesan menos de 8 bytes, como int (4 bytes) o char (1 byte), bool (1 byte), float (4 bytes)
    vector<int> primitivos = {1, 2, 3, 4, 5};
    for (auto p : primitivos) {
        cout << "Primitivo: " << p << "\n";
    }
    //es lo mismo que 
    for (int p : primitivos) {
        cout << "Primitivo: " << p << "\n";
    }
    //un string que está compuesto por char también aplica
    string texto = "Hola";
    for (auto c : texto) {
        cout << "Caracter: " << c << "\n";
    }
    // es lo mismo que
    for (char c : texto) {
        cout << "Caracter: " << c << "\n";
    }

    //si queremos modificar el original usamos auto&
    for (auto& p : primitivos) {
        p *= 2;
    }
    // es lo mismo que
    for (int& p : primitivos) {
        p *= 2;
    }
    cout << "Primitivos modificados:\n";
    for (auto p : primitivos) {
        cout << "Primitivo: " << p << "\n";
    }

    //si tenemos un vector de objetos grandes, es mejor usar const auto& para no hacer copias y no modificar el original
    vector<vector<int>> matriz = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //cada vector<int> pesa 36 bytes, 3*4 12 bytes de los datos y 24  de 3*8 por 3 punteros a los datos
    for (const auto& fila : matriz) { //pesa menos aquí porque fila sería un solo puntero que pesa 8 bytes, y no 36 bytes como cada vector<int>
        for (const auto& elemento : fila) {
            cout << elemento << " ";
        }
        cout << "\n";
    }


    // en cuánto a código ASCCI lo podemos obtener igualando la variable a entero
    string s = "hola";
    for (char c : s) {
        cout << "Caracter: " << c << ", ASCII: " << (int)c << "\n";
    }
    //o..
    int ascii = s[0]; //el primer caracter de la cadena
    cout << "Primer caracter: " << s[0] << ", ASCII: " << ascii << "\n";
    //las minúsculas van de 97 a 122, las mayúsculas van de 65 a 90, 
    //para convertir de minúscula a mayúscula restamos 32, para convertir de mayúscula a minúscula sumamos 32
    s[0] = (char)(ascii - 32); //convertimos a mayuscula el primer caracter
    cout << "Primer caracter convertido a mayuscula: " << s << "\n";

    return 0;
}