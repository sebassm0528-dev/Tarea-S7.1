//Nombre: Sebastian Mañay

/*

*/

#include <iostream>
#include <string>
using namespace std;

// Prototipos
void cargarDatos(string &producto, double &precio, int &cantidad);
double calcularSubtotal(double precio, int cantidad);
void aplicarDescuentos(double subtotal, int cantidad, double &total, double &descuentoTotal);
void mostrarFactura(string producto, double precio, int cantidad, double subtotal, double descuentoTotal, double total);

int main() {
    string producto;
    double precio, subtotal, descuentoTotal, total;
    int cantidad;

    cargarDatos(producto, precio, cantidad);

    subtotal = calcularSubtotal(precio, cantidad);

    aplicarDescuentos(subtotal, cantidad, total, descuentoTotal);

    mostrarFactura(producto, precio, cantidad, subtotal, descuentoTotal, total);

    return 0;
}

void cargarDatos(string &producto, double &precio, int &cantidad) {
    cout << "Ingrese nombre del producto: ";
    getline(cin, producto);

    cout << "Ingrese precio unitario: ";
    cin >> precio;

    cout << "Ingrese cantidad: ";
    cin >> cantidad;
}

double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}


void aplicarDescuentos(double subtotal, int cantidad, double &total, double &descuentoTotal) {
    descuentoTotal = 0.0;

    // Descuento por cantidad
    if (cantidad == 2) {
        descuentoTotal += subtotal * 0.10;   // 10%
    }
    else if (cantidad >= 3) {
        descuentoTotal += subtotal * 0.15;   // 15%
    }

    // Descuento adicional si subtotal supera 200
    if (subtotal > 200) {
        descuentoTotal += subtotal * 0.05;   // 5%
    }

    total = subtotal - descuentoTotal;
}

void mostrarFactura(string producto, double precio, int cantidad, double subtotal, double descuentoTotal, double total) {
    cout << "\n----- FACTURA -----\n";
    cout << "Producto: " << producto << endl;
    cout << "Precio unitario: " << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Descuentos aplicados: " << descuentoTotal << endl;
    cout << "TOTAL FINAL: " << total << endl;
}
