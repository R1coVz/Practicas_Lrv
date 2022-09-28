#include <iostream>

#define ENABLE_DEBUG

int getUserInput()
{
#ifdef ENABLE_DEBUG
    std :: cerr << "llamada a getUserInput () \n";
#endif
    std :: cout << "Ingrese un numero: ";
    int x {};
    std :: cin >> x;
    return x;
}

int main ()
{
#ifdef ENABLE_DEBUG
    std :: cerr << "llamada a main() \n";
#endif
    int x { getUserInput() };
    std :: cout << "Tu ingresaste:" << x;

    return 0;
}