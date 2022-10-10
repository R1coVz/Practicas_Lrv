#include <iostream>

bool isAllowedToTakerFunRide()
{
    std :: cout << "Que tan alto esres? (cm)\n";

    double height{};
    std::cin >> height;

    if (height > 140.0)
        return true;
    else
        return false;
}

int main()
{
    if (isAllowedToTakerFunRide())
        std::cout << "Diviertete!\n";
    else
    std::cout << "Lo siento, eres demasiad@ pequen@.\n";

    return 0;
}