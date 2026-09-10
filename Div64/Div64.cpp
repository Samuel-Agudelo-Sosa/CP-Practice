#include <iostream>
#include <string>

using namespace std;

void solve() {
    string cadena;
    cin >> cadena;
    
    int ceros = 0;
    bool encontre_uno = false;
    
    for (char s : cadena) {
        if (s == '1') {
            encontre_uno = true;
        } else if (encontre_uno) { // Solo cuenta el '0' si ya se vio al menos un '1'
            ceros++;
            if (ceros == 6) {
                cout << "yes";
                return;
            }
        }
    }
    
    cout << "no";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}