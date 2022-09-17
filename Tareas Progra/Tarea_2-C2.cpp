#include <iostream>

int geInteger()
{
    std::cout <<"Ingrese un entero: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int x { geInteger() };
    int y { geInteger() };

    std::cout << x <<" + " << y << " is "<< x + y << '\n';
    return 0; 
}