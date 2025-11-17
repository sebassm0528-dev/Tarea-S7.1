//Nombre: Sebastian Mañay

/*
El ejercicio consiste en crear un programa en C++ que pida al usuario ingresar las calificaciones de cuatro
estudiantes, las almacene dentro de un arreglo y luego utilice una función de tipo void para mostrar en
pantalla todas las notas registradas. Con esto se practica el uso de arreglos, funciones y entrada de datos.
*/

#include <iostream>
using namespace std;

// Función void que muestra las notas
void mostrarNotas(float notas[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Estudiante " << (i + 1) << ": " << notas[i] << endl;
    }
}

int main() {
    const int N = 4;
    float notas[N];

    // Ingreso de las notas
    cout << "Ingrese las calificaciones de " << N << " estudiantes:\n";
    for (int i = 0; i < N; i++) {
        cout << "Nota del estudiante " << (i + 1) << ": ";
        cin >> notas[i];
    }

    // Llamada a la función para mostrar las notas
    mostrarNotas(notas, N);

    return 0;
}
