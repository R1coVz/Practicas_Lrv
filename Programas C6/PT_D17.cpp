#include <iostream>

void print()
{
  std::cout << " there\n";
}

namespace foo
{
  void print()
  {
    std::cout << "Hello";
  }
}

int main()
{
  foo::print();
  ::print();

  return 0;
}