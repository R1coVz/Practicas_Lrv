#include <iostream>

int main()
{
    std::cout << "Ingresaste un caracter: ";

    char ch{};
    std::cin >> ch;
    std::cout << ch << "Tiene el codigo ASCII " << static_cast<int>(ch) <<'\n';

    return 0;
}