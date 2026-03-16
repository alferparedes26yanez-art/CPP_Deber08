/*
TAREA: FUNCIONES EN C++
AUTOR: ALEX FERNANDO PAREDES
EJERCICIO 3: Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
     leer los datos,
    calcular el área,
    mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.




*/

#include <iostream>
#include <iomanip> //usamos esta libreria para poder definir los decimales en 2

using namespace std;

//declaramos funciones
void leerDimensiones(double &b, double &h);
double calcularArea(double b, double h);
void mostrarResultado(double area);

int main() {
    double base, altura, resultadoArea;

// funcion para verificar que los datos sean mayores a cero
    leerDimensiones(base, altura);
    
    if (base > 0 && altura > 0) {
        resultadoArea = calcularArea(base, altura);
        mostrarResultado(resultadoArea);
    } else {
        cout << "Error: Las dimensiones deben ser mayores a cero." << endl;
    }

    return 0;
}

// proceso para las funciones

//leemos los datos
void leerDimensiones(double &b, double &h) {
    cout << "*** CALCULO DE AREA DE RECTANGULO ***" << endl;
    cout << "Ingrese la base: ";
    cin >> b;
    cout << "Ingrese la altura: ";
    cin >> h;
}

// funcion para calcular area
double calcularArea(double b, double h) {
    return b * h;
}

// Fmostrar resultado
void mostrarResultado(double area) {
    cout << fixed << setprecision(2);
    cout << "El area calculada del rectangulo es: " << area << endl;
}