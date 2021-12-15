// @file Putter.h
#pragma once
#include <string>
#include <iostream>
#include "Disc.h"
//LO2a
// Visibility Inheritance model
// Since Putter has public access to Disc it can access all that is public but what is private and protected won’t change.
// If Putter had protected access, then anything that is public will become protected
// If putter had Private access, then Everything would become Private.
//


//LO2.
class Putter :
	public Disc
{
private:

public:
	//LO1b
	Putter() = default;
	Putter(std::string name, int weight, int speed, int glide, int turn, int fade) :Disc{ name, weight, speed, glide, turn, fade } {}


	// redefined Virtual function: status from the base class Disc in the derived class Putter
	// Will run instead of the Virtual Function thanks to runtime polymorphism
	// Overriding the virtual according to the pointer set up in DiscGolf Application.cpp
	void stats() override
	{		// all the stats for a putter

		std::cout << "\n Putter: " << Disc::get_name() << std::endl;
		std::cout << " Speed: " << Disc::get_speed() << std::endl;
		std::cout << " Glide: " << Disc::get_glide() << std::endl;
		std::cout << " Turn: " << Disc::get_turn() << std::endl;
		std::cout << " Fade: " << Disc::get_fade() << std::endl;
		std::cout << " Weight: " << Disc::get_weight() << "g" << std::endl;
	}

	void distance()
	{

	}
};
