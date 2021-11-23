#pragma once
#include <string>
#include <iostream>
#include "Disc.h"
//
// Visibility Inheritance model
// Since Putter has public access to Disc it can access all that is public but what is private and protected won’t change.
// If Putter had protected access, then anything that is public will become protected
// If putter had Private access, then Everything would become Private.
//


//
class Putter :
    public Disc
{
private:
    //range 100
public:
    
    Putter() {}
    Putter(std::string name, int weight, int speed, int glide, int turn, int fade) :Disc{ name, weight, speed, glide, turn, fade } {}


	// redefined Virtual function: status from the base class Disc in the derived class Putter
	// Will run instead of the Virtual Function thanks to runtime polymorphism
	// Overriding the virtual according to the pointer set up in DiscGolf Application.cpp
	void stats()
	{
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

