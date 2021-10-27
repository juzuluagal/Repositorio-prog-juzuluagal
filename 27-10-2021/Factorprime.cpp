// Calcular el mayor factor primo divisor de N
#include<iostream>
int main()
{
  long long int N = 600851475147 ;
 // Calcular divisores primos:
 // Calcular divisores
 // Analizar si es primo
  for(long long int a = 2 ; a < N ; a ++ )
  if ( N%a == 0){
  //std :: cout << a << "\n" ;
  long long largedivisor = N/a;
  bool isprime = true;
  for(long long b = 2; b < largedivisor; b++){
  if(largedivisor%b == 0){
   isprime=false;
   break;
  }
  if(isprime){
 std :: cout << N/a << "\n" ;
 break; }  ;

  return 0;}
  }
}