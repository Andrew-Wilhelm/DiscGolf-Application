/** @file Disc.h

 *  @brief This file contains the super class disc 

 *

 *  Has all the importants of the classes

 *

 *  @author Andrew Wilhelm

 *  @bug No known bugs.

 */ 
#pragma once
#include <string>
#include <iostream>
//LO1.Designand implement a class.
class Disc
{
	//LO6
	// Private Members
private:
	int m_speed;
	int m_glide;
	int m_turn;
	int m_fade;
	int m_weight;
	
	std::string m_name;

public:
	
	//LO1a
	// Virtual Function allows passing of this status function and goes to the satus function in the other classes.
	virtual void stats()
	{
		std::cout << "\n Disc: " << std::endl;
		std::cout << " Speed: NA" <<  std::endl;
		std::cout << " Glide: NA" <<  std::endl;
		std::cout << " Turn: NA" <<  std::endl;
		std::cout << " Fade: NA" << std::endl;
		std::cout << " Weight: NA" << "g" << std::endl;
	}

	// Pure Virtual Function
	//virtual void distance() = 0;

	Disc(std::string name, int weight, int speed, int glide, int turn, int fade) :m_name(name),m_weight(weight), m_speed(speed), m_glide(glide), m_turn(turn), m_fade(fade) {}
	int get_speed() { return m_speed; }
	int get_glide() { return m_glide; }
	int get_turn() { return m_turn; }
	int get_fade() { return m_fade; }
	int get_weight() { return m_weight; }
	std::string get_name() { return m_name; }
	Disc() { m_name = "TBD"; }
	Disc(std::string name) { m_name = name; }


};

