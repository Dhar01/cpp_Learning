#include <iostream>
#include <string>

enum class MonsterType
{
    ORGE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct Monster
{
    MonsterType type;
    std::string name;
    int health;
};

std::string getMonsterTypeString(Monster monster)
{
    if (monster.type == MonsterType::ORGE)
        return "Ogre";
    else if (monster.type == MonsterType::DRAGON)
        return "Dragon";
    else if (monster.type == MonsterType::ORC)
        return "Orc";
    else if (monster.type == MonsterType::GIANT_SPIDER)
        return "Giant Spider";
    else if (monster.type == MonsterType::SLIME)
        return "Slime";

    return "Unknown";
}

void printMonster(Monster monster)
{
    std::cout << "This " << getMonsterTypeString(monster) <<
        " is named " << monster.name <<
        " and has " << monster.health << " health.\n";
}

int main()
{
    Monster orge{ MonsterType::ORGE, "Torg", 145 };
    Monster slime{ MonsterType::SLIME, "Blurp", 23 };

    printMonster(orge);
    printMonster(slime);

    return 0;
}
