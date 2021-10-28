#pragma once
#include <string>
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
    Putter(std::string name) :Disc{ name } {}
};

