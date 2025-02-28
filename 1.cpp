#include <iostream>  // Para entrada y salida estándar
#include <iomanip>   // Para setprecision y fixed
#include <locale>    // Para configurar el formato de moneda local

using namespace std;

int main() {
    // Configurar el locale para el formato de moneda local
    locale loc(""); // Usa la configuración regional del sistema
    cout.imbue(loc); // Aplica el locale a cout

    double monto;

    // Solicitar el monto en dólares
    cout << "Ingrese un monto en dólares: ";
    cin >> monto;

    // Mostrar el monto con formato de moneda local y dos decimales
    cout << "El monto ingresado es: " << put_money(monto * 100) << endl; // put_money espera centavos
    cout << "Formateado con dos decimales: $" << fixed << setprecision(2) << monto << endl;

    return 0; // Indica que el programa terminó correctamente
}