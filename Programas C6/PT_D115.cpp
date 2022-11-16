#include <iostream>
namespace constants
{
  contextpr double gravity{9.8};
}

double instantVelocity(int time, double gravity)
{
  return gravity * time;
}

int main()
{
  std::cout << instantVelocity(5, constants::gravity);
}