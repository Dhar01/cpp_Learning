#include <iostream>
#include "constants.h"

double calculateHeight(int towerHeight, int seconds);
void printHeight(double height, int seconds);
void result(int towerHeight, int seconds);

int main()
{
		std::cout << "Enter the height of the tower (in meters): ";
		int height{};
		std::cin >> height;

		result(height, 0);
		result(height, 1);
		result(height, 2);
		result(height, 3);
		result(height, 4);
		result(height, 5);
		
		return 0;
}

double calculateHeight(int towerHeight, int seconds)
{
		double distanceFallen { (constants::gravity * (seconds * seconds)) / 2.0 };
		double currentHeight { towerHeight - distanceFallen };

		return currentHeight;
}

void printHeight(double height, int seconds)
{
		if (height > 0.0)
				std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
		else
				std::cout << "At " << seconds << " seconds, the ball is on the ground\n";
}

void result(int towerHeight, int seconds)
{
		double height{ calculateHeight(towerHeight, seconds) };
		printHeight(height, seconds);
}
