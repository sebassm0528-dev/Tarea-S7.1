//Nombre: Sebastian Mañay

/*
El programa pide al usuario el tamaño del arreglo y sus elementos; luego llama a la función
calcularPromedio, que suma todos los valores y retorna el promedio como double. En el main
el promedio se muestra usando dos decimales con setprecision(2).
*/

#include <iostream>
#include <iomanip> // Para poder usar setprecision
using namespace std;

// Función que calcula y retorna el promedio
double calcularPromedio(int arr[], int tam) {
    int suma = 0;

    for(int i = 0; i < tam; i++) {
        suma += arr[i];
    }

    return (double)suma / tam; // Retorna el promedio como double
}

int main() {
    int tam;

    cout << "Ingrese el numero de elementos del arreglo: ";
    cin >> tam;

    int arreglo[tam];

    cout << "Ingrese los " << tam << " elementos:\n";
    for(int i = 0; i < tam; i++) {
        cin >> arreglo[i];
    }

    double promedio = calcularPromedio(arreglo, tam);

    // Mostrar promedio con 2 decimales
    cout << fixed << setprecision(2);
    cout << "El promedio es: " << promedio << endl;

    return 0;
}

