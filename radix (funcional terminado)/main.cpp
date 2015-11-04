#include "stringify.h"
#include "radix.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>



using namespace std;

int main ()
{/*
	int num = 4567;
	string numcad = stringify (num);
	string digito = digitpos (numcad,5);
	//cout << digito << endl;

	std::vector<std::string> lista;
	srand(time(NULL));

	for (int i=0;i<1000;i++){
        int numero;
        numero=rand() % 1001;
        lista.push_back(stringify(numero));
	}*/

	for (int d = 0; d < 3; d++) // d toma longitud de cadena
	{
		lista = radix(lista, d);

		for (unsigned int i=0; i < lista.size(); i++)
		{
			std::cout << lista[i] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
