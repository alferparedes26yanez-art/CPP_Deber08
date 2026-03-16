/*
TAREA: FUNCIONES EN C++
AUTOR: ALEX FERNANDO PAREDES
ENUNCIADO: Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.

E/P/S

ENTRADA: UN NUMERO ENTERO POSITIVO

PROCESO: INCIAR CONTADOR EN CERO
    HACEMOS UN CICLO DE 1 HASTA N
    LLAMAR A LA incrementar(int &contador)

SALIDA: 
    EL VALOR DE CONTADOR EN CADA PASO

*/

#include <iostream>

using namespace std;

//DECLARAMOS LAS FUNCIONES
void leerLimite(int &n);
void incrementar(int &contador);
void mostrarContador(int contador);

int main() {
    int n;
    int contadorActual = 0; 

    leerLimite(n);

    //VERIFICAMOS QUE NO SE ANEGATIVO
    if (n > 0) {
        cout << "Iniciando contador..." << endl;
        
        for (int i = 0; i < n; i++) {
            incrementar(contadorActual); // Se pasa por referencia
            mostrarContador(contadorActual);
        }
    } else {
        cout << "Error: El numero debe ser un entero positivo." << endl;
    }

    return 0;
}

//PROCESO

// Lectura de datos
void leerLimite(int &n) {
    cout << "Ingrese el numero de veces a incrementar (n): ";
    cin >> n;
}

// VA INCREMENTANDO +1
void incrementar(int &contador) {
    contador = contador + 1; 
    
}

// MOSTRAMOS
void mostrarContador(int contador) {
    cout << "Valor actual del contador: " << contador << endl;
}