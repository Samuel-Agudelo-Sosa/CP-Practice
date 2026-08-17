#include <iostream>
#include <string>

using namespace std;
/* 
void solve() {
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // Pre-asignamos un string con tamaño 'n', lleno de espacios
    string acc(n, ' ');
    
    for (int i = 0; i < n; i++) {
        int offset = (i + 1) / 2;
        int pos;
        
        if (n % 2 != 0) {
            // Biyección para N impar
            int sign = (i % 2 == 0) ? 1 : -1;
            pos = (n / 2) + sign * offset;
        } else {
            // Biyección para N par
            int sign = (i % 2 == 0) ? -1 : 1;
            pos = (n / 2 - 1) + sign * offset;
        }
        
        acc[pos] = s[i];
    }
    
    cout << acc << '\n';
}
}
*/
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    string acc(n, ' ');
    int left = 0, right = n - 1;
    bool a_la_derecha = true; // El primer paso (i = n - 1) siempre va a la derecha
    
    for (int i = n - 1; i >= 0; i--) {
        if (a_la_derecha) {
            acc[right--] = s[i];
        } else {
            acc[left++] = s[i];
        }
        a_la_derecha = !a_la_derecha; // Alterna en cada iteración
    }
    
    cout << acc << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}