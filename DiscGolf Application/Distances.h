#pragma once
#include "Disc.h"
class Distance :
	public Disc
{
private:

public:
	void noviceDistance()
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

	void intermediateDistance()
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

	void advancedDistance()
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
};
