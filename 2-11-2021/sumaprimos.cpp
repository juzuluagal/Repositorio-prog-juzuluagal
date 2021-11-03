#include <iostream>
#include <cmath>
#include <cstdlib>

bool isprime (long long n);
long long sumaprimos (long long n);

int main (int argc, char **argv)
{
  const long long n = atoll(argv[1]); 
  std::cout << sumaprimos(n) << std::endl;

  return 0;
}

bool isprime (long long n)
{
    bool isprime = true;
    for(long long a = 2; a <= std::sqrt(n); a++) {
        if (n%a == 0) {
            isprime = false;
            break;
        }
    }
    return isprime;
}

long long sumaprimos(long long n)
{
  long long suma = 0;
  for(int b = 2; b < n; b++){
    if(isprime(b)){
      suma += b;
    }
  }

  return suma;
}
