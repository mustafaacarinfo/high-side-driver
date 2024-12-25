
/*  BTT6X series high side driver will be coded in this repository with OOP perspective, will aim to expand C++ data structure skils and Syntax.*/

#include <iostream>

#include "hsd_types.hpp"
#include "hsd_shield_605xx.hpp"
#include "hsd_shield.hpp"
#include "hsd.hpp"

using namespace std;
using namespace hsd;


int main()
{
    Bts605xShield switches;

    // Add elements using std::make_unique (C++14 or later)
    /*switches.push_back(std::make_unique<Hss>(1));
    switches.push_back(std::make_unique<Hss>(2));
    switches.push_back(std::make_unique<Hss>(3));*/


    switches.readDiagx(2);

}


