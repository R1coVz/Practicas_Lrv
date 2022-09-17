#include <iostream>

int main()
{
    // obtener el valor del usuario
    std::cout <<"Ingrese un entero:";
    int num{};
    std::cin >> num;

    //Imprime el valor duplicado
    std::cout <<num << "duplicado es:" << num * 2 << '\ n';

    return 0;
}