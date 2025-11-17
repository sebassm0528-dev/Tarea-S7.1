//Nombre: Sebastian Mañay

/*
---
*/

#include <iostream>
using namespace std;

// --- PROTOTIPOS ---
void recargar(double &saldo, double monto);
bool pagar(double &saldo, double tarifa);
void mostrarEstado(double saldo, int pasadas);

int main() {
    double saldo = 0.0;        // saldo inicial
    double monto, tarifa = 0.45;
    int pasadas = 0;

    cout << "===== TARJETA METRO/BUS QUITO =====" << endl;
    cout << "Saldo actual: $" << saldo << endl;

    // --- RECARGA ---
    cout << "Ingrese monto a recargar: ";
    cin >> monto;

    recargar(saldo, monto);
    cout << "Recarga exitosa. Saldo actual: $" << saldo << endl << endl;

    // --- PRIMER PAGO ---
    cout << "Pagando pasaje de $0.45 ..." << endl;
    if (pagar(saldo, tarifa)) {
        pasadas++;
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl << endl;
    } else {
        cout << "Saldo insuficiente." << endl;
    }

    // --- SEGUNDO PAGO ---
    cout << "Pagando pasaje de $0.45 ..." << endl;
    if (pagar(saldo, tarifa)) {
        pasadas++;
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl << endl;
    } else {
        cout << "Saldo insuficiente." << endl;
    }

    // --- MOSTRAR ESTADO FINAL ---
    mostrarEstado(saldo, pasadas);

    return 0;
}

// Función para recargar saldo
void recargar(double &saldo, double monto) {
    if (monto > 0) {
        saldo += monto;
    }
}

// Función para pagar pasaje
bool pagar(double &saldo, double tarifa) {
    if (saldo >= tarifa) {
        saldo -= tarifa;
        return true;
    }
    return false;
}

// Función para mostrar el estado final
void mostrarEstado(double saldo, int pasadas) {
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << saldo << endl;
    cout << "======================================" << endl;
}
