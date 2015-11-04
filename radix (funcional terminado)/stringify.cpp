#include "stringify.h"
//#include <iostream>

std::string stringify (int num)
{

	std::string result;//string which will contain the result
	std::ostringstream convert; // stringstream used for the conversion
	convert << num;//add the value of Number to the characters in the stream
	result = convert.str();
	return result;

}

std::string digitpos (std::string numcad, int pos)
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
