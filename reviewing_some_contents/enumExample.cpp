#include <iostream>
#include <string>

enum ItemType
{
    ITEMTYPE_SWORD,
    ITEMTYPE_TORCH,
    ITEMTYPE_POTION,
};

std::string getItemName(ItemType itemType)
{
    if(itemType == ITEMTYPE_SWORD)
        return "Sword";
    else if (itemType == ITEMTYPE_TORCH)
        return "Torch";
    else if (itemType == ITEMTYPE_POTION)
        return "Potion";
    else
        return "????";
}

int main()
{
    ItemType itemType = ITEMTYPE_TORCH;

    std::cout << "You are carrying a " <<
        getItemName(itemType) << '\n';

    return 0;
}