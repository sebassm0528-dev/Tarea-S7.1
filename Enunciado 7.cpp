//Nombre: Sebastian Mañay

/*
El programa guarda varios números en un arreglo y luego llama a una función que recibe el arreglo por
valor. La función recorre cada número, verifica si es par y aumenta un contador. Finalmente, retorna
la cantidad total de pares encontrados, que se muestra en pantalla.
*/

#include <iostream>
using namespace std;

// Función con paso por valor que cuenta los números pares
int contarPares(int arreglo[], int tam) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (arreglo[i] % 2 == 0) {
            contador++;
        }
    }
    return contador; // Retorna la cantidad de pares
}

int main() {
    int n;

    cout << "Cuantos numeros desea ingresar? \n";
    cin >> n;

    int numeros[n];

    // Ingreso de datos
    cout << "Ingrese " << n << " numeros enteros:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    // Llamada a la función con paso por valor
    int cantidadPares = contarPares(numeros, n);

    cout << "La cantidad de numeros pares es: " << cantidadPares << endl;

    return 0;
}
