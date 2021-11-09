#include <cmath>
#include <iostream>

// definition
using fptr = double(double);
double fun(double x);
double trapezoid(double a, double b, double h, fptr f);
double simpson(double a, double b, double h, fptr f);
template <typename typealg>
double richardson(double a, double b, double h, fptr f, typealg alg);

// main
int main(int argc, char **argv)
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    const double XMIN = std::atof(argv[1]);// posicion inicial
    const double XMAX = std::atof(argv[2]); //posicion final
    const double H = std::atof(argv[3]); // particion
    const double M = std::atof(argv[4]); //masa
    // Se deben escribir en la consola los valores de 0, 4, 10 y 1,25 en este caso
    const double z = 2;
    const double exact = 2*std::sin(XMAX) - 2*XMAX* std::cos(XMAX) - 2*std::sin(XMIN) + 2*XMIN*std::cos(XMIN);
    for (double h = 4.0e-1; h >= 4.0e-3; h /= 1.0e2) {
        std::cout << h << "\t"
                  <<std::fabs(1 - trapezoid(XMIN, XMAX, h, fun)/exact) << "\t"
                  <<std::fabs(1 - simpson(XMIN, XMAX, h, fun)/exact) << "\n";
                  const double p = sqrt(2/M* (std::fabs(trapezoid(XMIN, XMAX, h, fun))));
    const double pp =  sqrt(2/M*(std::fabs(simpson(XMIN, XMAX, h, fun))));
    std::cout << p << "\n" ;
    std::cout << pp << "\n";

             }
    
    return 0;
}

// implementation

double fun(double x)
{
    return 2*x*std::sin(x);
}

double trapezoid(double a, double b, double h, fptr f)
{
  const int n = std::floor((b-a)/h); // warning: (b-a)/h not integer
  double result = 0.0;
  for(int ii = 1; ii <= n-1; ++ii) {
    double xi = a + ii*h; // uniform spacing
    result += f(xi);
  }
  result += 0.5*(f(a) + f(b));
  result *= h;

  return result;
}



template <typename typealg>
double richardson(double a, double b, double h, fptr f, typealg alg)
{
  double val1 = alg(a, b, h, f);
  double val2 = alg(a, b, h/2, f);
  return (4*val2 - val1)/3;
}
double simpson(double a, double b, double h, fptr f){
  double n = (b-a)/h;
  double result = f(a)+f(b);
  double s1 = 0.0;
  double s2 = 0.0;
  for(int ii = 1; ii < h/2 -1; ++ii)
  {
    double x = a + (2 * ii)*n;
    s1+= f(x);
  }
  for(int ii = 1; ii<= h/2; ++ii)
  {
    double x = a + (2 * ii - 1)*n;
    s2 += f(x);
  }
  result +=  2*s1 + 4*s2;
  result *= h/3;
  return result;
}