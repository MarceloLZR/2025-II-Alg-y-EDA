#include <iostream>
#include "vector.h"
#include "DemoVector.h"
#include "hilos.h"
using namespace std;

/* Revisado por:
   1. Ernesto Cuadros-Vargas
   4. Héctor Bobbio Hermoza 
   2. Jharvy Jonas Cadillo Tarazona
   20. Ortiz Lozano Eric Hernan
   22. Chandler Steven Perez Cueva
*/

int main(){
    cout << "Hello Alg y EDA-UNI" << endl;
    cout.flush();

    // Prueba DemoVector
    DemoVector();

    // Prueba threads
    DemoThreads();

    // Pausa para ver la salida en Windows
    cout << "Presiona Enter para salir..." << endl;
    cin.get();
    return 0;
}
