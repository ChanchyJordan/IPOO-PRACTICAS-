#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main (){
    //Declarar la variable
    ifstream archivo;

    //Abrimos el archivo
    archivo.open("C:\Users\Jordan\Documents\IPOO\Tarea\Second Homework\archivo.txt");

    //Comprobamos que el archivo esta abierto y puede ser leido
    if (!archivo) {
        cerr << "No pudo leerse el archivo";
    }

    //Una vez comprobado leemos el archivo
    /*while (archivo >> x) {
      sum = sum + x;
    }*/

    //Cerramos el archivo y liberamos recursos del sistema
    archivo.close();

    //Mostramos el resultado
    cout << "Resultado = " << sum << endl;
        return 0;
}
