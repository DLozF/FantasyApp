#ifndef BACKFANTASY_H
#define BACKFANTASY_H

#include <string>

// Struct definition
struct Player
{
    std::string name;
    double totalPoints;
    std::string team;
    double averagePoints;
    int gamesPlayed;
    double pointsArr[6];
};

// Constant
constexpr double missed = -100;

// Function declarations
void welcomeMessage();
int checkGamesPlayed(double pointsArr[6]);
double calculateAverage(double pointsArr[6]);
double sumPoints(double pointsArr[6]);
double roundOff(double value, int places);

#endif
