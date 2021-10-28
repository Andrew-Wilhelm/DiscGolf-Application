// DiscGolf Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Functional vs OOP
// 
// Functional variables are vulnerable and can be modified by anyone and it could prove difficult to make multiple instances of one item.
// Defining a function for each operation with the function body providing a case for each data variant
// 
// OOP can protect variables and limit what has access to them. also, it’s much easier to make use of them in many different places without having to recreate them thanks to classes.
// Defining a class for each data variant with the class definition providing a method for each operation
// 
//


#include <iostream>
#include <string>
#include "DistanceDriver.h"
#include "FairwayDriver.h"
#include "MidRange.h"
#include "Putter.h"
#include "Disc.h"

void discCollection();

int main()
{
    discCollection();



}

void discCollection()
{

    std::cout << "Discs you have" << std::endl;
    Putter wizard("Wizard");
    std::cout << "Putter: " << wizard.get_name() << std::endl;
    wizard.set_speed(2);
    std::cout << "Speed: " << wizard.get_speed() << std::endl;

    MidRange claymore("Claymore");
    std::cout << "Midrange: " << claymore.get_name() << std::endl;
    claymore.set_speed(5);
    std::cout << "Speed: " << claymore.get_speed() << std::endl;


    int out = 0;
    while (out != 1) {
        int distance;
        Disc discToBeUsed;
        std::cout << "distance to basket: " << std::endl;
        std::cin >> distance;
        if (discToBeUsed.bestDisc(distance) == 1)
        {
            std::cout << "Use the " << wizard.get_name() << std::endl;
        }
        else if (discToBeUsed.bestDisc(distance) == 2)
        {
            std::cout << "Use the " << claymore.get_name() << std::endl;
        }
        std::cout << "Do you want to input another distnce?\n" << "0 for Yes.\n" << "1 for No" << std::endl;
        std::cin >> out;
    }
}
