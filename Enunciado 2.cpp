//Nombre: Sebastian Mañay

/*
El programa permite ingresar cinco números enteros en un arreglo unidimensional. Luego, mediante una función de tipo void, 
se muestran en pantalla todos los valores almacenados en ese arreglo. El usuario ingresa los números y la función se encarga 
únicamente de imprimirlos.
*/

#include <iostream>
using namespace std;

// Función void para mostrar los valores del arreglo
void mostrarArreglo(int arr[]) {
    cout << "Los valores almacenados son:\n";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numeros[5];

// Ingreso de datos
    cout << "Ingrese 5 numeros enteros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

  // Llamada a la función
    mostrarArreglo(numeros);
    return 0;
}






