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
// Correctly reason about control flow in a program using dynamic dispatch. |||||||
//
// Explain the relationship between object - oriented inheritance(code - sharing and overriding) |||||||||
// and subtyping(the idea of a subtype being usable in a context that expects the supertype).
// 
// Uses the derived class by going through the base class pointers.
// Below we go through Disc class to get to Putter class with pointers and overrides the function in the base class with the function in the derived class.
//
// Use object-oriented encapsulation mechanisms such as interfaces and private members. ||||||||||
//
// Define and use iterators and other operations on aggregates(array or vector), including operations that take functions as arguments. |||||||||||
// 
//

/*
* 
* Have all the discs with their stats
* Have a difficulty like new, Ameture, pro
* diffrent difficultirs woudl change the recomended disc
* Distance to use each disc at
* 
*/

#include <iostream>
#include <string>
#include <functional>
#include <iterator> // for iterators
#include <vector> // for vectors
#include "DistanceDriver.h"
#include "FairwayDriver.h"
#include "MidRange.h"
#include "Putter.h"
#include "Disc.h"


void discCollection();
void discToDistanceNovice();
void discToDistanceIntermediate();
void discToDistanceAdvanced();
std::string playerRating(int rating);
std::string passedFunct(int rating, std::function<std::string(int)> func);




int main()
{
    
    discCollection();
    int rating;
    std::cout << " On a scale from 0 - 120, how good are you at disc golf: ";
    std::cin >> rating;
    std::cout << passedFunct(rating, &playerRating) << std::endl;

    int out = 0;
    while (out != 1)
    {
        if (rating >= 0 && rating <= 40)
        {
            discToDistanceNovice();
        }
        else if (rating > 40 && rating <= 80)
        {
            discToDistanceIntermediate();
        }
        else if (rating > 80 && rating <= 120)
        {
            discToDistanceAdvanced();
        }
        else
        {
            std::cout << " invalid Input" << std::endl;
        }
        
        
        
        std::cout << " 0 to do another distance\n 1 to stop." << std::endl;
        std::cin >> out;
    }
    return 0;
}

void discCollection()
{
    std::cout << "------- Disc Collection -------" << std::endl;
    
    // Virtual function with the stats of the discs
    // Im controlling the flow of the program with the virtual Function int he base class
    //  and the pointers which will direct the flow to the correct derived class
 
    Disc *disc1, *disc2, *disc3, *disc4;        // Creating Pointers to Disc objects
    Putter *putter1;                            // Creatign a pointer to Putter object.
    MidRange *midrange1;                        // Creatign a pointer to MidRange object.
    FairwayDriver *fairway1;                    // Creatign a pointer to FairwayDriver object.
    DistanceDriver *distance1;                  // Creatign a pointer to DistanceDriver object.

    disc1 = putter1 = new Putter ("Wizard", 175, 2, 3, 0, 2);        // Call to connstructor in Disc to pass string and ints, creating Putter object, Pointing disc1 & putter1 to the new object
    disc1->stats();                                                   
    disc1 = midrange1 = new MidRange("Claymore", 180, 5, 5, -1, 1);     // Call to connstructor in Disc to pass string and ints, creating MidRange object, Pointing disc1 & midrange1 to the new object
    disc1->stats();
    disc1 = fairway1 = new FairwayDriver("Magician", 180, 6, 4, 0, 2);      // Call to connstructor in Disc to pass string and ints, creating FairwayDriver object, Pointing disc1 & fairway1 to the new object
    disc1->stats();
    disc1 = distance1 = new DistanceDriver("Sapphire", 157, 10, 6, -2, 2);      // Call to connstructor in Disc to pass string and ints, creating DistanceDriver object, Pointing disc1 & distance1 to the new object
    disc1->stats();

}

void discToDistanceNovice()
{
    int distance;

    // use of iterators on aggregates, using the advance increment the iterator.
    std::vector<std::string> ar = { "Putter: Wizard", "Midrange: Claymore", "Fairway Driver: Magician", "Distance Driver: Sapphire" };
    std::vector<std::string>::iterator ptr = ar.begin();

    std::cout << " \nInput The Distance To The Basket In Feet" << std::endl;
    std::cin >> distance;
    if (distance >= 0 && distance <= 75)
    {
        advance(ptr, 0);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 75 && distance <= 150)
    {
        advance(ptr, 1);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 150 && distance <= 250)
    {
        advance(ptr, 2);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 250)
    {
        advance(ptr, 3);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else
    {
        std::cout << "Not valid input" << std::endl;
    }

}

void discToDistanceIntermediate()
{
    int distance;

    // use of iterators on aggregates, using the advance increment the iterator.
    std::vector<std::string> ar = { "Putter: Wizard", "Midrange: Claymore", "Fairway Driver: Magician", "Distance Driver: Sapphire" };
    std::vector<std::string>::iterator ptr = ar.begin();

    std::cout << " \nInput The Distance To The Basket In Feet" << std::endl;
    std::cin >> distance;
    if (distance >= 0 && distance <= 100)
    {
        advance(ptr, 0);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 100 && distance <=250)
    {
        advance(ptr, 1);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 250 && distance <= 350)
    {
        advance(ptr, 2);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 350)
    {
        advance(ptr, 3);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else
    {
        std::cout << "Not valid input" <<  std::endl;
    }

}

void discToDistanceAdvanced()
{
    int distance;

    // use of iterators on aggregates, using the advance increment to increment the iterator.
    std::vector<std::string> ar = { "Putter: Wizard", "Midrange: Claymore", "Fairway Driver: Magician", "Distance Driver: Sapphire" };
    std::vector<std::string>::iterator ptr = ar.begin();

    std::cout << " \nInput The Distance To The Basket In Feet" << std::endl;
    std::cin >> distance;
    if (distance >= 0 && distance <= 150)
    {
        advance(ptr, 0);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 150 && distance <= 250)
    {
        advance(ptr, 1);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 250 && distance <= 450)
    {
        advance(ptr, 2);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else if (distance > 450)
    {
        advance(ptr, 3);
        std::cout << "Use the " << *ptr << std::endl;
    }
    else
    {
        std::cout << "Not valid input" << std::endl;
    }

}

// Function that will be passed as an argument
std::string playerRating(int rating)
{
    if (rating >= 0 && rating <= 40)
    {
        return "Novice";
    } 
    else if (rating > 40 && rating <= 80)
    {
        return "Intermediate";
    }
    else if (rating > 80 && rating <= 120)
    {
        return "Advanced";
    }
    else
    {
        return "invalid Input";
    }
}

// Passing the function as an argument
std::string passedFunct(int rating, std::function<std::string(int)> func) 
{
    return func(rating); 
}

