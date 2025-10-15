#include <iostream>
#include <string>
#include "BackFantasy.h"

int main()
{
    // declare player structs
    Player playerA;
    Player playerB;
    

    
    welcomeMessage();

    // get player A info
    std::cout << "Enter Player A: ";
    std::getline(std::cin, playerA.name);
    std::cout << "Enter points for Player A from Week 1 - 6, if injured input x. " << std::endl;
    
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Week " << (i + 1) << ": ";
        std::getline(std::cin, playerA.pointsArr[i]);
    }



    // get Player B info
    std::cout << "\nEnter Player B: ";
    std::getline(std::cin, playerB.name);
    std::cout << "\nEnter points for Player B from Week 1 - 6, if injured input x. " << std::endl;
    
    for (int i = 0; i < 6; i++)
    {
        std::cout << "Week" << (i + 1) << ": ";
        std::getline(std::cin, playerA.pointsArr[i]);
    }

    // float totalA = playerA.totalPoints;
   //  float totalB = playerB.totalPoints;

    // std::cout << "Total Points: " << std::endl;
    // std::cout << playerA.name << ": " << totalA << std::endl;
    // std::cout << playerB.name << ": " << totalB << std::endl;

    

    std::cout << "Average Points: " << std::endl;
    std::cout << playerA.name << ": " << playerA.averagePoints << std::endl;
    std::cout << playerB.name << ": " << playerB.averagePoints << std::endl;

    if (playerA.averagePoints > playerB.averagePoints)
    {
        std::cout << "You should start " << playerA.name;
    }
    else if (playerA.averagePoints < playerB.averagePoints)
    {
        std::cout << "You should start " << playerB.name;
    }
    else
    {
        std::cout << "Start whichever";
    }



    return 0;
}