#include "Radix.h"

Radix::Radix()
{
    int num = 4567;
	std::string numcad = stringify (num);
	std::string digito = digitpos (numcad,5);
	//cout << digito << endl;

	std::vector<std::string> lista;
	srand(time(NULL));

	for (int i=0;i<1000;i++){
        int numero;
        numero=rand() % 1001;
        lista.push_back(stringify(numero));

	}
	Imprimir();

}

int Radix::Imprimir(){
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

std::vector<std::string> Radix::radix(std::vector<std::string> lista, int posicion)
{
	std::vector< std::vector <std::string> > sort(10, std::vector<std::string>() ) ;

	for (unsigned int i=0; i < lista.size();i++)
	{
		std::string digito = digitpos (lista[i], posicion);

		if (digito=="0")
		{
			sort[0].push_back(lista[i]);
		}
		if (digito=="1")
		{
			sort[1].push_back(lista[i]);
		}
		if (digito=="2")
		{
			sort[2].push_back(lista[i]);
		}
		if (digito=="3")
		{
			sort[3].push_back(lista[i]);
		}
		if (digito=="4")
		{
			sort[4].push_back(lista[i]);
		}
		if (digito=="5")
		{
			sort[5].push_back(lista[i]);
		}
		if (digito=="6")
		{
			sort[6].push_back(lista[i]);
		}
		if (digito=="7")
		{
			sort[7].push_back(lista[i]);
		}
		if (digito=="8")
		{
			sort[8].push_back(lista[i]);
		}
		if (digito=="9")
		{
			sort[9].push_back(lista[i]);
		}

	}

	imprimebin (sort);
	lista = integra (lista, sort);
	return lista;

}

int Radix::imprimebin(std::vector < std::vector <std::string> > sort )
{
	for (int bin=0; bin < sort.size(); bin++)
	{
		std::cout << "bin" << bin << " :"  << std::endl;
		for (unsigned int i=0; i < sort[bin].size(); i++)
		{
			std::cout << sort[bin][i] << " ";
		}

		std::cout << std::endl;
	}
	return 0;
}

std::vector<std::string> Radix::integra(std::vector<std::string> lista, std::vector < std::vector <std::string> > sort)
{
	lista.clear();
	for (int bin=0; bin < sort.size(); bin++)
	{
		for (unsigned int i=0; i < sort[bin].size(); i++)
		{
			lista.push_back (sort[bin][i]);
		}

	}
	return lista;
}


//--------------------------------------------------------------------------------------------------
std::string Radix::stringify (int num)
{

	std::string result;//string which will contain the result
	std::ostringstream convert; // stringstream used for the conversion
	convert << num;//add the value of Number to the characters in the stream
	result = convert.str();
	return result;

}

std::string Radix::digitpos(std::string numcad, int pos)
{
	 //recibe la posicion del digito de derecha a izquierda
	 //0 para unidades
	 //retorna string digito
	 std::string digito;
	 int longitud = numcad.length();
	 try
	 {
		digito = numcad.substr (longitud-pos-1,1);
	 }
	 catch (const std::out_of_range)
	 {
		digito = "0";
	 }
	 return digito;
 }

