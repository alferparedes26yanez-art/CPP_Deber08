/*
TAREA: FUNCIONES EN C++
AUTOR: ALEX FERNANDO PAREDES
ENUNCIADO:Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
leer los números,
calcular la suma,
calcular el promedio,
 mostrar los resultados.

 E/P/S
 ENTRADA: LEER 3 NUMEROS
 PROCESOS: SUMA: N1 + N2 + N3
    PROMEDIO: SUMA / 3.0

SALIDA: RESULTADO DE PROCESO Y SALIDA

*/

#include <iostream>
#include <iomanip>// usamos esta libreria para poder definir los decimales en 2

using namespace std;

//FUNCIONES QUE VAMOS A UTILIZAR

void leerNumeros(int &n1, int &n2, int &n3);
int calcularSuma(int n1, int n2, int n3);
double calcularPromedio(int suma);
void mostrarResultados(int suma, double promedio);

int main() {
    int num1, num2, num3;
    int sumaTotal;
    double promedioTotal;

    //CONVOCAMOS A LAS FUNCIONES
    leerNumeros(num1, num2, num3);
    sumaTotal = calcularSuma(num1, num2, num3);
    promedioTotal = calcularPromedio(sumaTotal);
    mostrarResultados(sumaTotal, promedioTotal);

    return 0;
}

// PROCESO

//LEEMOS NUMEROS
void leerNumeros(int &n1, int &n2, int &n3) {
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el tercer numero: ";
    cin >> n3;
}

//CALCULO DE SUMA
int calcularSuma(int n1, int n2, int n3) {
    return n1 + n2 + n3;
}

//CALCULO DE PROMEDIO
double calcularPromedio(int suma) {
    return suma / 3.0; 
}

//MOSTRARMOS RESULTADOS
void mostrarResultados(int suma, double promedio) {
    cout << "\**** RESULTADOS ****" << endl;
    cout << "Suma total: " << suma << endl;
    cout << fixed << setprecision(2); //para definir los 2 decimales

    cout << "Promedio: " << promedio << endl;
}