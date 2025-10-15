#include <iostream>
#include <string>

struct Player
{
std::string name;
float totalPoints;
std::string team;
float averagePoints;
int gamesPlayed;
std::string pointsArr[6];

};



//Welcome Message
void welcomeMessage()
{
    std::cout << "Hello! Welcome. " << std::endl;
}



// Checks how many games played
int checkGamesPlayed(const std::string pointsArr[6])
{
    int gamesPlayed = 0;    //starts at 0

    for (int i = 0; i < 6; i++)
    {
        if (pointsArr[i] != "x")
        {
            gamesPlayed++;      // counts all the games played
        }
    }

    return gamesPlayed;
}



// Calculates Average of Points with games played
float calculateAverage(const std::string pointsArr[6])
{
    averagePoints = 0;
    float totalPoints = 0.0;
    int gamesPlayed = checkGamesPlayed(pointsArr); // assigns gamesPlayed the value that the function "checkGamesPlayed" returned
    for (int i = 0; i < 6; i++)
    {
        if (pointsArr[i] != "x")
        {
            totalPoints = totalPoints + std::stof(pointsArr[i]);
        }
    }

    if (gamesPlayed == 0)
    {
        return 0.0;
    }

    averagePoints = totalPoints / gamesPlayed;

    return averagePoints;    // calculated average
}
