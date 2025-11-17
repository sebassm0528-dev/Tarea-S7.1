//Nombre: Sebastian Mañay

/*
El programa debe leer 5 números enteros y almacenarlos en un arreglo. Luego, mediante una función que
utilice paso por referencia, debe calcular la suma total de todos los elementos del arreglo.
Después de eso, el usuario podrá elegir un dato para eliminar del arreglo (es decir, borrar un número
específico ingresado por teclado), y el programa ajustará el arreglo y mostrará el resultado actualizado.
*/

#include <iostream>
using namespace std;

// Función que calcula la suma usando paso por referencia
void calcularSuma(int arr[], int tam, int &suma) {
    suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arr[i];
    }
}

// Función para eliminar un dato del arreglo
void eliminarDato(int arr[], int &tam, int dato) {
    int pos = -1;

    // Buscar el dato
    for (int i = 0; i < tam; i++) {
        if (arr[i] == dato) {
            pos = i;
            break;
        }
    }

    // Desplazar elementos hacia la izquierda
    for (int i = pos; i < tam - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reducir el tamaño
    tam--;

    cout << "--- Dato eliminado correctamente ---" << endl;
}

int main() {
    int arr[5];
    int tam = 5;
    int suma;
    int datoEliminar;

    // Leer los 5 números
    cout << "Ingrese 5 numeros enteros:" << endl;
    for (int i = 0; i < tam; i++) {
        cin >> arr[i];
    }

    // Calcular suma con paso por referencia
    calcularSuma(arr, tam, suma);
    cout << "La suma total es: " << suma << endl;

    // Eliminar dato
    cout << "Ingrese el dato que desea eliminar: ";
    cin >> datoEliminar;

    eliminarDato(arr, tam, datoEliminar);

    // Mostrar arreglo actualizado
    cout << "Arreglo actualizado: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;
    return 0;
}
