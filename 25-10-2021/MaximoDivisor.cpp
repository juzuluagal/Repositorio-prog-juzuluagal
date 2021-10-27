// Calcular el máximo divisor de N
#include<iostream>
int main()
{ // Se define una variable para 1
long long int a = 2;
  // Se define N
  long long int N = 600851475147;
 // Se haya el mínimo divisor de N
  for (a ; a<N ; a+=1 ){if(N%a == 0 )
 // Se divide N entre el mínimo divisor para que arroje el divisor más grande posible
  {
  std::cout << N/a << "\n";
  break;
  }
  };
  return 0;
}