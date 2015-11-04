#ifndef RADIX_H
#define RADIX_H

#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
#include <sstream>
#include <stdio.h> /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>


class Radix
{
    public:
        std::vector<std::string> lista;


        Radix();
        std::vector<std::string> radix(std::vector<std::string> lista, int posicion);
        //FUNCION llamado radix que retorna un vector de  string recibe como parametro un vector de string llamado Lista y un int
        int imprimebin (std::vector < std::vector <std::string> > sort );//sor variable
        //FUNCION llamada imprimebin
        std::vector<std::string> integra (std::vector<std::string> lista, std::vector < std::vector <std::string> > sort);


        std::string stringify (int num);
        std::string digitpos (std::string numcad, int pos);
        int Imprimir();

    protected:
    private:
};

#endif // RADIX_H
