#include <iostream>
#include <string>

enum ItemType
{
  itemtype_sword,
  ItemType_torch,
  ItemType_potion
};

std::string getItemName(ItemType ItemType)
{
  if (ItemType == itemtype_sword)
    return "Sword";
  if (ItemType == ItemType_torch)
    return "Torch";
  if (ItemType == ItemType_potion)
    return " Potion";

  return "???";
}

int main()
{
  ItemType ItemType{ItemType_torch};

  std ::cout << "You are carrying a " << getItemName(ItemType) << '\n';

  return 0;
}