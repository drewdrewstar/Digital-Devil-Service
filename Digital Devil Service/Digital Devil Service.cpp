// Digital Devil Service.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
    std::cout << "Hello, my name is Stephen." << std::endl;
    //Stat declaration
    int STR;
    int INT;
    int DXT;
    int STM;
    int AGL;
    int LCK;
    int LevelUpStats;
    
    STR = 6;
    INT = 6;
    DXT = 6;
    STM = 6;
    AGL = 6;
    LCK = 6;
    int StatTotal = STR + INT + DXT + STM + AGL + LCK;
    LevelUpStats = 18;

    std::cout << "Your name is Ikeru Masumi" << std::endl;
    std::cout << "Your total stats are " << StatTotal <<"." << std::endl;
    std::cout << "You have " << LevelUpStats << " points to distribute among your parameteres." << std::endl;
    std::cout << "Please input STRENGTH points." << std::endl;
    int STRin;
    std::cin >> STRin;
    int StatIn;

    if (STRin <= 6 && STRin > 0)
    {
      STR += STRin;
    std::cout << "Your new STRENGTH score is " << STR << "." << std::endl;
    LevelUpStats -= STRin;
    std::cout << "You have " << LevelUpStats << "points left." << std::endl;
    }
    else
    {
      std::cout << "The number is invalid. Please enter a number between 1 and 6." << std::endl;
    }

    
    return 0;
}

