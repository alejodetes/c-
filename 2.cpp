#include <iostream>  // Para entrada y salida estándar
#include <cmath>     // Para M_PI y funciones matemáticas
#include <iomanip>   // Para setprecision

using namespace std;

int main() {
    double radio;

    // Solicitar el radio del círculo
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    // Calcular el área y el perímetro
    double area = M_PI * radio * radio;       // Área = π * r²
    double perimetro = 2 * M_PI * radio;      // Perímetro = 2 * π * r

    // Mostrar los resultados con tres decimales
    cout << fixed << setprecision(3); // Configura la salida para mostrar 3 decimales
    cout << "El área del círculo es: " << area << endl;
    cout << "El perímetro del círculo es: " << perimetro << endl;

    return 0; // Indica que el programa terminó correctamente
}