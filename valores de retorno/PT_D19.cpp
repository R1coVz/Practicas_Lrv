#include <iostream>

int getValueFromUser ()
{
    std::cout <<"Ingrese un entero:";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int num{getValueFromUser()};
    std::cout << num << "duplicado es:" << num * 2 << '\ n';
    return 0;
}