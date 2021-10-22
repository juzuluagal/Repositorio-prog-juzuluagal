// Operaciones 
#include <iostream>
int main(void)
  {
  double x = 9.7; double y = -1.87;
  double z = 0;
  z = x + y;
  std::cout << z << std::endl;
 z = x - y;
 std::cout << z << std::endl ;
 z = x * y;
 std::cout << z << std::endl ;
 int j = -2.9;
 std::cout << j << std::endl ;
 std::cout << (2*3)-(4.0/5) << std::endl ;
 std::cout << 4%3 << std::endl ;
 std::cout << 3%3 << std::endl ;
 std::cout << 2%3 << std::endl ;
 std::cout << -4%3 << std::endl ;
 int flag = (5<4) ? x : y;
 std::cout << flag << std::endl ;
 int m = 2, n = 17, k = 0;
 k = m & n;
 std::cout << k << std::endl ;
 k = m | n;
  std::cout << k << std::endl ;
 k = m << n;
  std::cout << k << std::endl ;
 k = m >> n;
  std::cout << k << std::endl ;
 return 0;
  }