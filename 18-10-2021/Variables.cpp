// Nombrar librerías
#include <iostream>
#include <cmath>
int main()
{
  //Declare una variable tipo float, sin inicializar, e imprima su valor
 float X; 
 std::cout << "X=" << X << "\n";
 //Declare una variable tipo bool, la inicialize en false e imprima la variable
 bool Y=false;
 std::cout << "Y=" << Y << "\n";
 //Declare una variable tipo double e imprima su dirección de memoria (use el operador & justo antes de la variable al impriirla) 
 double Z;
 std::cout << "Z=" << &Z << "\n";
  //y los bytes que ocupa (use el operador sizeof, basicamente debe escribir sizeof(double))
  int W = sizeof(double);
  std::cout << "W=" << W << "\n";
  // Declare una variable float con el valore inicial 1.0e40 e imprímala a la pantalla: porqué cree que se imprime eso? Cóloquelo como comentario en el código
  float V = 1.0e40;
  std::cout << "V=" << V << "\n";
  //
 return 0;
}

