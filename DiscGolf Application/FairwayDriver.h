// @file FairwayDriver.h
#pragma once
#include "Disc.h"
class FairwayDriver :
	public Disc
{
private:

public:


	FairwayDriver() = default;
	FairwayDriver(std::string name, int weight, int speed, int glide, int turn, int fade) :Disc{ name, weight, speed, glide, turn, fade } {}


	// redefined Virtual function: status from the base class Disc in the derived class FairwayDriver
	void stats() override
	{
		// all the stats for a Fairway driver

		std::cout << "\n Fairway Driver: " << Disc::get_name() << std::endl;
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

