// DiscGolf Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Purpose: Help select a disc according to disatcne to basket and player rating.
// Author: Andrew Wilhelm


// LO4
// Functional vs OOP
// Functional variables are vulnerable and can be modified by anyone and it could prove difficult to make multiple instances of one item.
// Defining a function for each operation with the function body providing a case for each data variant
// 
// OOP can protect variables and limit what has access to them. also, it’s much easier to make use of them in many different places without having to recreate them thanks to classes.
// Defining a class for each data variant with the class definition providing a method for each operation
// 
// LO3
// Uses the derived class by going through the base class pointers.
// Below we go through Disc class to get to Putter class with pointers and overrides the function in the base class with the function in the derived class.
// 

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
auto playerRating(int rating)->std::string;
auto passedFunct(int rating, std::function<std::string(int)> func)->std::string;




auto main()->int
{

	discCollection();

	char ratingA = NULL;
	int rating = NULL;
	const int chartoint = 48;
	std::cout << " On a scale from 0 - 2, how good are you at disc golf: ";
	std::cin >> ratingA;
	if (isdigit(ratingA))		//checks if int
	{
		
		rating = ratingA - chartoint;
		if (rating >= 0 && rating <= 2)		//checks to see if int is within range
		{
			std::cout << passedFunct(rating, &playerRating) << std::endl;
		}
		else
		{
			std::cout << " invalid Input" << std::endl;
			exit(0);
		}
	}
	else
	{
		std::cout << " invalid Input" << std::endl;
		exit(0);
	}

	int out = 0;
	while (out != 1)
	{
		// goes to the difficult rating previouse selected
		if (rating == 0)
		{
			discToDistanceNovice();
		}
		else if (rating == 1)
		{
			discToDistanceIntermediate();
		}
		else if (rating == 2)
		{
			discToDistanceAdvanced();
		}
		else
		{
			std::cout << " invalid Input" << std::endl;
			exit(0);

		}



		std::cout << " any other input to do another distance\n 1 to stop." << std::endl;
		std::cin >> out;
	}
	return 0;
}
// base set of discs put into collection
void discCollection()
{
	std::cout << "------- Disc Collection -------" << std::endl;

	//LO5
	// Virtual function with the stats of the discs
	// Im controlling the flow of the program with the virtual Function int he base class
	//  and the pointers which will direct the flow to the correct derived class

	const int PW = 175;		//Weight
	const int PS = 2;		//speed
	const int PG = 3;		//glide
	const int PT = 0;		//turn
	const int PF = 2;		//fade

	Disc* disc1 = new Putter("Wizard", PW, PS, PG, PT, PF);        // Call to connstructor in Disc to pass string and ints, creating Putter object, Pointing disc1 & putter1 to the new object
	disc1->stats();
	const int MW = 180;		//Weight
	const int MS = 5;		//speed
	const int MG = 5;		//glide
	const int MT = -1;		//turn
	const int MF = 1;		//fade
	Disc* disc2 = new MidRange("Claymore", MW,MS,MG,MT,MF);     // Call to connstructor in Disc to pass string and ints, creating MidRange object, Pointing disc1 & midrange1 to the new object
	disc2->stats();
	const int FW = 180;		//Weight
	const int FS = 6;		//speed
	const int FG = 4;		//glide
	const int FT = 0;		//turn
	const int FF = 2;		//fade
	Disc* disc3 = new FairwayDriver("Magician", FW,FS,FG,FT,FF);      // Call to connstructor in Disc to pass string and ints, creating FairwayDriver object, Pointing disc1 & fairway1 to the new object
	disc3->stats();
	const int DW = 157;		//Weight
	const int DS = 10;		//speed
	const int DG = 6;		//glide
	const int DT = -2;		//turn
	const int DF = 2;		//fade
	Disc* disc4 = new DistanceDriver("Sapphire", DW,DS,DG,DT,DF);      // Call to connstructor in Disc to pass string and ints, creating DistanceDriver object, Pointing disc1 & distance1 to the new object
	disc4->stats();

}

// disatnce per disc according to novice rating
void discToDistanceNovice()
{
	int distance = NULL;
	const int zero = 0;
	const int seventyfive = 75;
	const int onehundredfifty = 150;
	const int twofitty = 250;

	//LO7
	// use of iterators on aggregates, using the advance increment the iterator.
	std::vector<std::string> ar = { "Putter: Wizard", "Midrange: Claymore", "Fairway Driver: Magician", "Distance Driver: Sapphire" };
	auto ptr = ar.begin();

	std::cout << " \nInput The Distance To The Basket In Feet" << std::endl;
	std::cin >> distance;
	if (distance >= zero && distance <= seventyfive)
	{
		advance(ptr, 0);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > seventyfive && distance <= onehundredfifty)
	{
		advance(ptr, 1);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > onehundredfifty && distance <= twofitty)
	{
		advance(ptr, 2);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > twofitty)
	{
		advance(ptr, 3);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else
	{
		std::cout << "Not valid input" << std::endl;
	}

}

// disatnce per disc according to intermediate rating

void discToDistanceIntermediate()
{
	int distance = NULL;
	const int hundo = 100;
	const int twofitty = 250;
	const int threefitty = 350;


	// use of iterators on aggregates, using the advance increment the iterator.
	std::vector<std::string> ar = { "Putter: Wizard", "Midrange: Claymore", "Fairway Driver: Magician", "Distance Driver: Sapphire" };
	auto ptr = ar.begin();

	std::cout << " \nInput The Distance To The Basket In Feet" << std::endl;
	std::cin >> distance;
	if (distance >= 0 && distance <= hundo)
	{
		advance(ptr, 0);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > hundo && distance <= twofitty)
	{
		advance(ptr, 1);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > twofitty && distance <= threefitty)
	{
		advance(ptr, 2);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > threefitty)
	{
		advance(ptr, 3);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else
	{
		std::cout << "Not valid input" << std::endl;
	}

}

// disatnce per disc according to advanced rating

void discToDistanceAdvanced()
{
	int distance = NULL;
	const int onehundredfifty = 150;
	const int twofitty = 250;
	const int fourfitty = 450;
	// use of iterators on aggregates, using the advance increment to increment the iterator.
	std::vector<std::string> ar = { "Putter: Wizard", "Midrange: Claymore", "Fairway Driver: Magician", "Distance Driver: Sapphire" };
	auto ptr = ar.begin();

	std::cout << " \nInput The Distance To The Basket In Feet" << std::endl;
	std::cin >> distance;
	if (distance >= 0 && distance <= onehundredfifty)
	{
		advance(ptr, 0);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > onehundredfifty && distance <= twofitty)
	{
		advance(ptr, 1);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > twofitty && distance <= fourfitty)
	{
		advance(ptr, 2);
		std::cout << "Use the " << *ptr << std::endl;
	}
	else if (distance > fourfitty)
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
auto playerRating(int rating)->std::string
{
	if (rating == 0)
	{
		return "Novice";
	}
	if (rating == 1)
	{
		return "Intermediate";
	}
	if (rating == 2)
	{
		return "Advanced";
	}
		return "invalid Input";
}

// Passing the function as an argument
auto passedFunct(int rating, std::function<std::string(int)> func)->std::string
{
	return func(rating);
}

