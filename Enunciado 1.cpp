//Nombre: Sebastian Mañay

/*
El ejercicio consiste en desarrollar un programa en C++ que calcule el precio final de un producto aplicando
dos descuentos: uno por promoción y otro por cliente frecuente. Para ello, se deben crear dos funciones:
una que calcule el valor de un descuento a partir del precio base y un porcentaje, y otra que utilice esta
función para obtener ambos descuentos y restarlos del precio original. En el programa principal, se pide al
usuario ingresar el precio del producto y los porcentajes de descuento, y finalmente se muestran en pantalla
los descuentos aplicados y el precio final resultante.
*/

#include <iostream>
using namespace std;

// Función que calcula el valor descontado
double calcularDescuento(double precio, double porcentaje) {
    return precio * (porcentaje / 100);
}

// Función que calcula el precio final aplicando ambos descuentos
double calcularPrecioFinal(double precioBase, double porcPromo, double porcCliente) {
    double descPromo = calcularDescuento(precioBase, porcPromo);
    double descCliente = calcularDescuento(precioBase, porcCliente);
    double precioFinal = precioBase - descPromo - descCliente;
    return precioFinal;
}

int main() {
    double precioBase;
    double porcPromo;
    double porcCliente;

    // Entrada de datos
    cout << "Ingrese el precio base del producto: ";
    cin >> precioBase;

    cout << "Ingrese el porcentaje de descuento por promocion: ";
    cin >> porcPromo;

    cout << "Ingrese el porcentaje de descuento por cliente frecuente: ";
    cin >> porcCliente;

    // Cálculo del precio final
    double descPromo = calcularDescuento(precioBase, porcPromo);
    double descCliente = calcularDescuento(precioBase, porcCliente);
    double precioFinal = calcularPrecioFinal(precioBase, porcPromo, porcCliente);

    // Mostrar resultados
    cout << "Descuento por promocion: $" << descPromo << endl;
    cout << "Descuento por cliente frecuente: $" << descCliente << endl;
    cout << "Precio final del producto: $" << precioFinal << endl;

    return 0;
}

