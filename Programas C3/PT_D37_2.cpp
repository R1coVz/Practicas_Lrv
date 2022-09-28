#include <iostream>

int getValue ()
{
    std :: cerr << "getValue () llamdado \n";
    return 4;
}

int main ()
{
    std :: cerr <<"main () llamado \n";
    std :: cout << getValue;

    return 0;
}