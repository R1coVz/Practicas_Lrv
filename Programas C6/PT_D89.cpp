#include "constants.h"
#include <iostream>

int main()
{
  std::cout << "Ingresa el radio: ";
  int radius{};
  std::cin >> radius;

  std::cout << "La circunferencia es: " << 2.0 * radius constants ::pi << '\n';

  return 0;
}