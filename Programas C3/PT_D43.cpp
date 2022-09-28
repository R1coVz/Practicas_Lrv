#include <iostream>

int getUserInput()
{
    std :: cerr << "llamada a getUserInput() \n";
    std :: cout << "Ingresaste un numero: ";
    int x {};
    std :: cin >> x;
    return x;
}
int main ()
{
    std :: cerr << "clamada a main() \n";
    int x { getUserInput() };
    std :: cout << "Usted ingreso: " << x;

    return 0;
}