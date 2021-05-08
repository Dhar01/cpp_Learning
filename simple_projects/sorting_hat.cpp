#include <iostream>

int main()
{
    int gryffindor{};
    int hufflepuff{};
    int ravenclaw{};
    int slytherin{};

    int answer1{}, answer2{}, answer3{}, answer4{};

    std::cout << "+++++++++++++++++++++\n";
    std::cout << "The Sorting Hat Quiz.\n";
    std::cout << "+++++++++++++++++++++\n";

    std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
    std::cout << "1) The Good\n";
    std::cout << "2) The Great\n";
    std::cout << "3) The Wise\n";
    std::cout << "4) The Bold\n";

    std::cin >> answer1;

    if (answer1 == 1)
        hufflepuff += 1;
    else if (answer1 == 2)
        slytherin += 1;
    else if (answer1 == 3)
        ravenclaw += 1;
    else if (answer1 == 4)
        gryffindor += 1;
    else
        std::cout << "Invalid Input.\n";

    std::cout << "Q2) Dawn or Dusk";
    std::cout << "1) Dawn";
    std::cout << "2) Dusk";

    std::cin >> answer2;

    if (answer2 == 1){
        gryffindor += 1;
        ravenclaw += 1;
    }
    else if (answer2 == 2) {
        hufflepuff += 1;
        slytherin += 1;
    }
    else
        std::cout << "Invalid Input.\n";

    std::cout << "\nQ3) Which kind of instrument most pleases your ear?\n\n";

    std::cout << "  1) The violin\n";
    std::cout << "  2) The trumpet\n";
    std::cout << "  3) The piano\n";
    std::cout << "  4) The drum\n\n";

    std::cout << "Enter your answer (1-4): ";
    std::cin >> answer3;

    if (answer3 == 1)
        slytherin++;
    else if (answer3 == 2)
        hufflepuff++;
    else if (answer3 == 3)
        ravenclaw++;
    else if (answer3 == 4)
        gryffindor++;

  // ~~~~~~~~~~ Question 4 ~~~~~~~~~~

    std::cout << "\nQ4) Which road tempts you the most?\n\n";

    std::cout << "  1) The wide, sunny grassy lane\n";
    std::cout << "  2) The narrow, dark, lantern-lit alley\n";
    std::cout << "  3) The twisting, leaf-strewn path through woods\n";
    std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";

    std::cout << "Enter your answer (1-4): ";
    std::cin >> answer4;

    if (answer4 == 1)
        hufflepuff++;
    else if (answer4 == 2)
        slytherin++;
    else if (answer4 == 3)
        gryffindor++;
    else if (answer4 == 4)
        ravenclaw++;

    std::string house{};
    int max{};

    if (gryffindor > max)
        max = gryffindor;
        house = "Gryffindor";
    else if (hufflepuff > max)
        max = hufflepuff;
        house = "Hufflepuff";
    else if (ravenclaw > max)
        max = ravenclaw;
        house = "RavenClaw";
    else
        max = slytherin;
        house = slytherin;

    std::cout << house << "!\n";

    return 0;
}