#include <iostream>

void doIt (int x)
{
    int y {4};
    std :: cout << "doIt: x =" << x << "y =" << y << '\ n';
    x = 3;
    std :: cout << "doIt: x =" << x << "y =" << y << '\ n';
}

int main()
{
    int x {1};
    int x {2};
    std :: cout << "Principal: x =" << x << "y =" << y << '\ n';
    doIt (x);
    std :: cout << "Principal: x =" << x << "y =" << y << '\ n';

    return 0;
}