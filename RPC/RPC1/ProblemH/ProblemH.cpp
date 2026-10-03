#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Función auxiliar para calcular el volumen de un cono truncado
double calcularVolumen(double radioFondo, double radioBoca, double altura) {
    double PI = 3.14159265358979323846;
    return (PI * altura / 3.0) * (radioBoca * radioBoca + radioFondo * radioFondo + radioBoca * radioFondo);
}

int main() {
    // Optimización de entrada/salida
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        double r, R, h_total;
        cin >> r >> R >> h_total;

        double volumenTotal = calcularVolumen(r, R, h_total);
        double objetivoMita = volumenTotal / 2.0;

        // Configuración inicial del método de bisección
        double limiteInferior = 0.0;
        double limiteSuperior = h_total;
        double alturaRespuesta = 0.0;


        for (int i = 0; i < 100; i++) {
            double mitad = limiteInferior + (limiteSuperior - limiteInferior) / 2.0;
            
    
            double radioMitad = r + (R - r) * (mitad / h_total);
            
      
            double volumenActual = calcularVolumen(r, radioMitad, mitad);

    
            if (volumenActual < objetivoMita) {
                limiteInferior = mitad;
            } else {
              
                limiteSuperior = mitad;
            }
            
            alturaRespuesta = mitad;
        }

        cout << fixed << setprecision(9) << alturaRespuesta << "\n";
    }
    return 0;
}