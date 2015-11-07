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
    private:
        std::vector<std::string> lista;
        int posicion;

    public:
        Radix();
        int Init();
        std::vector<std::string> radix(int posicion);
        //FUNCION llamado radix que retorna un vector de  string recibe como parametro un vector de string llamado Lista y un int
        int imprimebin (std::vector < std::vector <std::string> > sort );//sor variable
        //FUNCION llamada imprimebin
        std::vector<std::string> integra (std::vector < std::vector <std::string> > sort);

        std::string stringify (int num);
        std::string digitpos (std::string numcad, int pos);

        int printLista();


    protected:
    private:
};

#endif // RADIX_H
