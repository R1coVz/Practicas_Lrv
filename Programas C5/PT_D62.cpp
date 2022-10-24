#include <cmath>
#include <algorithm>

bool approximatelyEqual(double a, double b, double epsilon)
{
    return(std::abs(a- b) <= (std::max(std::abs(a), std::abs(b)) * epsilon));
}


bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    // Comprobar si los numeros estan realmente cerca
    double diff { std::abs(a - b) };
    if (diff <=absEpsilon)
        return true;

        // algoritmo de knuth
    return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main()
{

    std::cout << approximatelyEqual(a, 1.0, 1e-8) << '\n';
    std::cout << approximatelyEqual(a-1.0, 0.0, 1e-8) << '\n';
    std::cout << approximatelyEqualAbsRel(a-1.0, 0.0, 1e-12, 1e-8) << '\n';
}