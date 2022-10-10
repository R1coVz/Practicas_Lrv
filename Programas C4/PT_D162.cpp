#include "constants.h"
#include <iostream>

int main()
{
    std::cout << "Ingrese el radio: ";
    int radius{};
    std::cin >> radius

    double circumference { 2.0 * radius * constants::pi };
    std::cout << "La circunferencia es: " << circumferencia << '\n';

    return 0;
}