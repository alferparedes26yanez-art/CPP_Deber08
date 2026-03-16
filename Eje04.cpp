/*
TAREA: FUNCIONES EN C++
AUTOR: ALEX FERNANDO PAREDES
EJERCICIO 4: Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
mostrar los valores antes del intercambio,
realizar el intercambio usando una función,
mostrar los valores después del intercambio.

E/P/S

ENTRADA: LEER DOS NUMEROS ENTERIOS N1, N2

PROCESOS:
    GUARDAR EL VALOR DE A TEMPORALMENTE (aux)
    ASIGNAR EL VALOS DE N1 A N2
    ASIGNAR EL VALOR DE aux a B


*/

#include <iostream>

using namespace std;

// --- PROTOTIPOS DE FUNCIONES ---
void leerDatos(int &a, int &b);
void intercambiar(int &a, int &b);
void mostrarValores(int a, int b, string mensaje); //usamos estring mensaje por que vamos a usar 2 veces las variables

int main() {
    int num1, num2;

    //leemos
    leerDatos(num1, num2);

    //mostramos los valoers antes de cambiar
    mostrarValores(num1, num2, "VALORES ORIGINALES");

    //Proceso de intercambio
    intercambiar(num1, num2);

    // Mostrar después
    mostrarValores(num1, num2, "VALORES INTERCAMBIADOS");

    return 0;
}

//PROCESOS

void leerDatos(int &a, int &b) {
    cout << "Ingrese el primer numero (A): ";
    cin >> a;
    cout << "Ingrese el segundo numero (B): ";
    cin >> b;
}

void intercambiar(int &a, int &b) {
    int aux; // Variable temporal
    aux = a;
    a = b;
    b = aux;
}

void mostrarValores(int a, int b, string mensaje) {
    cout << "**** " << mensaje << " ****" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
}