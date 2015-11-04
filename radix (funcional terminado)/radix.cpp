//radix sort
#include "stringify.h"
#include "radix.h"
//#include <vector>
//#include <string>
//#include <iostream>

std::vector<std::string> radix(std::vector<std::string> lista, int posicion)
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

void imprimebin (std::vector < std::vector <std::string> > sort )
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
}

std::vector<std::string> integra (std::vector<std::string> lista, std::vector < std::vector <std::string> > sort)
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
