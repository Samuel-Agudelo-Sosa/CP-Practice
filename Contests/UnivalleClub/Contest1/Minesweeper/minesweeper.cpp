#include <iostream>
#include <vector>

using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool comprobarCoordenadas(int a, int b, int n, int m) {
    return (a >= 0 && a < n && b >= 0 && b < m);
}

void solve() {
    int n, m;
    cin >> n >> m;

    int mines = 0, safe_cells = 0, valid_cells = 0;
    
    // Matriz de enteros
    vector<vector<int>> grid(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char cell; 
            cin >> cell;
            if (cell == '*') {
                grid[i][j] = -100; // Bomba: valor negativo único
            } else if (cell == '.') {
                grid[i][j] = -200; // Punto: valor totalmente aislado de los números
            } else {
                grid[i][j] = cell - '0'; // Números del 1 al 8
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == -100) {
                mines++;

                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if (comprobarCoordenadas(ni, nj, n, m)) {
                        if (grid[ni][nj] == -100) {
                            continue; // Es otra bomba, se ignora
                        } 
                        else if (grid[ni][nj] == -200) {
                            // Encontró un punto (-200) al lado de una bomba -> Inválido
                            cout << "NO\n";
                            return;
                        } 
                        else {
                            // Es una celda con número (o que ya llegó a 0)
                            grid[ni][nj]--;

                            if (grid[ni][nj] < 0) {
                                // Exceso de bombas en esta casilla
                                cout << "NO\n";
                                return;
                            }
                            if (grid[ni][nj] == 0) {
                                valid_cells++;
                            }
                        }
                    }
                }
            } 
            else if (grid[i][j] == -200) {
                safe_cells++;
            }
        }
    }

    // Comprobación final
    if (mines + safe_cells + valid_cells == n * m) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}