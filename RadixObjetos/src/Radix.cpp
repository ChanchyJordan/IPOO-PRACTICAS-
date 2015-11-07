#include "Radix.h"

Radix::Radix()
{
    std::cout<<std::endl<<" ------------------   RADIX   ------------------"<<std::endl<<std::endl<<std::endl;
    int num = 4567;
	std::string numcad = stringify (num);
	std::string digito = digitpos (numcad,5);
	//cout << digito << endl;

	//std::vector<std::string> lista;
	srand(time(NULL));

	for (int i=0;i<10;i++){
        int numero;
        numero=rand() % 1001;
        lista.push_back(stringify(numero));
	}

	for(int i=0;i<10;i++){
        std::cout<<"   "<<lista[i];
	}

	std::cout<<std::endl;
	Init();

}

int Radix::Init(){
	for (int d = 0; d < 3; d++) // d toma longitud de cadena
	{
		lista = radix(d);

        //FOR IMPRIMIR
		for (unsigned int i=0; i < lista.size(); i++)
		{
			std::cout << "   "<<lista[i];
		}
		std::cout << std::endl<< std::endl<< std::endl;
	}
	std::cout << std::endl<<std::endl;
	return 0;
}

std::vector<std::string> Radix::radix(int posicion)
{
	std::vector< std::vector <std::string> > Sort (10, std::vector<std::string>() ) ;//---------------------

	for (unsigned int i=0; i < lista.size();i++)
	{
		std::string digito = digitpos (lista[i], posicion);

		if (digito=="0")
			Sort[0].push_back(lista[i]);
        else {
            if (digito=="1")
                Sort[1].push_back(lista[i]);
            else {
                if (digito=="2")
                    Sort[2].push_back(lista[i]);
                else {
                    if (digito=="3")
                        Sort[3].push_back(lista[i]);
                    else{
                        if (digito=="4")
                            Sort[4].push_back(lista[i]);
                        else{
                            if (digito=="5")
                                Sort[5].push_back(lista[i]);
                            else{
                                if (digito=="6")
                                    Sort[6].push_back(lista[i]);
                                else{
                                    if (digito=="7")
                                        Sort[7].push_back(lista[i]);
                                    else{
                                        if (digito=="8")
                                            Sort[8].push_back(lista[i]);
                                        else{
                                            if (digito=="9")
                                                Sort[9].push_back(lista[i]);

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
	imprimebin (Sort);
	lista = integra (Sort);
	return lista;

}

int Radix::imprimebin(std::vector < std::vector <std::string> > Sort)
{
    std::cout<<std::endl;
	for (int bin=0; bin < Sort.size(); bin++)
	{
		std::cout << "    bin " << bin << " :  ";
		for (unsigned int i=0; i < Sort[bin].size(); i++)
		{
			std::cout << Sort[bin][i] << "  ";
		}

		std::cout << std::endl<< std::endl;
	}
	std::cout << std::endl<<"  --------------------------------------------------------------"<< std::endl;
	return 0;
}

std::vector<std::string> Radix::integra(std::vector < std::vector <std::string> > Sort)
{
	lista.clear();
	for (int bin=0; bin < Sort.size(); bin++)
	{
		for (unsigned int i=0; i < Sort[bin].size(); i++)
		{
			lista.push_back (Sort[bin][i]);
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
