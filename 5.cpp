#include <iostream>  // Para entrada y salida estándar
#include <iomanip>   // Para setw, left y right

using namespace std;

int main() {
    // Encabezados de la tabla
    cout << left << setw(10) << "Nombre" << right << setw(6) << "Edad" << setw(8) << "Altura" << endl;
    cout << setw(10) << "---------" << setw(6) << "----" << setw(8) << "------" << endl;

    // Datos de la tabla
    cout << left << setw(10) << "Ana" << right << setw(6) << 25 << setw(8) << 1.65 << endl;
    cout << left << setw(10) << "Luis" << right << setw(6) << 30 << setw(8) << 1.75 << endl;

    return 0; // Indica que el programa terminó correctamente
}