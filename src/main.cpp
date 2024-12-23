
/*  BTT6X series high side driver will be coded in this repository with OOP perspective, will aim to expand C++ data structure skils and Syntax.*/

#include <bits/stdc++.h>
#include "hss_shield.hpp"

using namespace std;


int main()
{
    std::vector<std::unique_ptr<Hss>> switches;

    // Add elements using std::make_unique (C++14 or later)
    switches.push_back(std::make_unique<Hss>(1));
    switches.push_back(std::make_unique<Hss>(2));
    switches.push_back(std::make_unique<Hss>(3));

    cout << "kemal sagcan";

}