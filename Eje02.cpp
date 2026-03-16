/*
TAREA: FUNCIONES EN C++
AUTOR: ALEX FERNANDO PAREDES
EJERCICIO 2: Mayor de dos números

E/P/S 

ENTREADA: LEER DOS NUMEROS ENTEROS N1, N2

PROCESO: DETERMINAR EL MAYOR
    SI N1 > N2 EL PRIMERO ES MAYOR
    SI N2 > N1 EL SEGUNDO ES MAYOR
    SI N2 == N1 SON IGUALES

SALIDA: MOSTRAR CUAL ES MAYOR O SI LOS 2 SON IGUALEES

*/

#include <iostream>

using namespace std;

//FUNCIONES QUE UTILIZAREMOS
void leerDatos(int &n1, int &n2);
void compararYMostrar(int n1, int n2);

int main() {
    int num1, num2;

    leerDatos(num1, num2);
    compararYMostrar(num1, num2);

    return 0;
}

//PROCESO

//LEEMOS LOS DATOS
void leerDatos(int &n1, int &n2) {
    cout << "--- COMPARADOR DE NUMEROS ---" << endl;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
}

//FUNCION LOGICA PARA COMPARAR LOS NUMEROS

void compararYMostrar(int n1, int n2) {
    cout << "RESULTADO: " << endl;
    
    if (n1 > n2) {
        cout << "El primer numero (" << n1 << ") es mayor que el segundo (" << n2 << ")." << endl;
    } 
    else if (n2 > n1) {
        cout << "El segundo numero (" << n2 << ") es mayor que el primero (" << n1 << ")." << endl;
    } 
    else {
        cout << "Ambos numeros son iguales (" << n1 << ")." << endl;
    }
}