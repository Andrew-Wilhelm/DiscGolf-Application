#pragma once
#include "Disc.h"
class MidRange :
    public Disc
{
private:

public:
    //range 250
    MidRange() {}
    MidRange(std::string name) :Disc{ name } {}
};

