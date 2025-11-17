//Nombre: Sebastian Mañay

/*
El programa guarda varios números en un arreglo y luego utiliza una función con paso por valor, lo que
significa que la función recibe una copia del dato, no el dato original. La función multiplica esa copia por un
número indicado por el usuario y muestra el resultado, manteniendo intacto el arreglo original.
*/

#include <iostream>
using namespace std;

// Función que recibe el número por valor y lo multiplica
int multiplicarPorValor(int elemento, int factor) {
    return elemento * factor; // No afecta al arreglo original
}

int main() {
    int n;

    cout << "Cuantos numeros desea ingresar? \n";
    cin >> n;

    int arreglo[n];

    // Ingreso del arreglo
    cout << "Ingrese los " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    int factor;
    cout << "Ingrese el numero por el que desea multiplicar cada elemento: \n";
    cin >> factor;

    cout << "Resultados:\n";
    for (int i = 0; i < n; i++) {
        cout << multiplicarPorValor(arreglo[i], factor) << " ";
    }

    cout << "\nArreglo original:\n";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;
}
