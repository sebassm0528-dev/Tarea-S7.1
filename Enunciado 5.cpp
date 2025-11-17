//Nombre: Sebastian Mañay

/*
El programa permite ingresar varios números y almacenarlos en un arreglo; luego utiliza una función con un
parámetro por referencia para analizar esos valores y actualizar directamente la variable donde se guardará
el número mayor. De esta forma, la función identifica el valor más alto del arreglo y el programa lo muestra
al final.
*/

#include <iostream>
using namespace std;

// Función que recibe el arreglo y su tamaño, y devuelve el mayor por referencia
void encontrarMayor(int arr[], int tam, int &mayor) {
    mayor = arr[0]; 
    for(int i = 1; i < tam; i++) {
        if(arr[i] > mayor) {
            mayor = arr[i]; 
        }
    }
}

int main() {
    int n;

    cout << "Cuantos numeros desea ingresar? ";
    cin >> n;

    int arreglo[n];

    // Lectura del arreglo
    for(int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    int mayorValor; // Aquí se guardará el resultado

    // Llamada a la función, que modificará mayorValor por referencia
    encontrarMayor(arreglo, n, mayorValor);

    cout << "El valor mayor del arreglo es: " << mayorValor << endl;

    return 0;
}
