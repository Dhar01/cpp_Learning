#include <iostream>

int main()
{
    enum Animal
    {
        ANIMAL_CAT = -3,
        ANIMAL_DOG,         // assigned to -2
        ANIMAL_PIG,         // assigned to -1
        ANIMAL_HORSE = 5,
        ANIMAL_GIRAFFE = 5, // same value as horese
        ANIMAL_CHICKEN,     // assigned to 6
    };
    
    // don't assign specific value to enumerator
    // avoid defining same value at enumerator
    
    int mypet = ANIMAL_PIG;

    /* compiler won't convert an integer to an
    enumerated value. But we can force it. */
    Animal animal = static_cast<Animal>(5);

    /* compiler won't let you input an enum using
    std::cin. we have to use static cast */
    int inputAnimal;
    std::cin >> inputAnimal;

    Animal animal{ static_cast<Animal>(inputAnimal) };
    

    std::cout << ANIMAL_HORSE << '\n';

    return 0;
}