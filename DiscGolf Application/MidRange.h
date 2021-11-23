#pragma once
#include "Disc.h"
class MidRange :
    public Disc
{
private:

public:

    //range 250
    MidRange() {}
    MidRange(std::string name, int weight, int speed, int glide, int turn, int fade) :Disc{ name, weight, speed, glide, turn, fade } {}


	// redefined Virtual function: status from the base class Disc in the derived class MidRange
	void stats()
	{
		std::cout << "\n Midrange: " << Disc::get_name() << std::endl;
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

