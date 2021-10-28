#pragma once
#include <string>
class Disc
{
private:
	int m_speed;
	int m_glide;
	int m_turn;
	int m_fade;
	int m_weight;
	//int m_maxDistance;
	std::string m_name;

public:
	Disc(int weight, int speed = 9, int glide = 6, int turn = -2, int fade = 1) :m_weight(weight), m_speed(speed), m_glide(glide), m_turn(turn), m_fade(fade) {}
	int get_speed() { return m_speed; }
	void set_speed(int speed) { m_speed = speed; }
	int get_glide() { return m_glide; }
	int get_turn() { return m_turn; }
	int get_fade() { return m_fade; }
	int get_weight() { return m_weight; }
	std::string get_name() { return m_name; }
	void set_name(std::string name) { m_name = name; }
	Disc() { m_name = "TBD"; }
	Disc(std::string name) { m_name = name; }


	int bestDisc(int distance) {
		int x;
		if (distance <= 100)
		{
			x = 1;
		}
		else if (distance >= 101)
		{
			x = 2;
		}
		return x;
	}
};

