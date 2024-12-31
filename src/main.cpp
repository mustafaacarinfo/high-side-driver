
/*  BTT6X series high side driver will be coded in this repository with OOP perspective, will aim to expand C++ data structure skils and Syntax.*/

#include <iostream>

#include "hsd_605xx.hpp"
#include "hsd_620xx.hpp"
#include "hsd.hpp"

using namespace std;
using namespace hsd;


int main()
{
    Btt605xx btt605xx; 
    Btt620xx btt620xx;

    btt605xx.readDiagx(12);
    btt620xx.readDiagx(12);

    btt605xx.readCurrent(12);
    btt620xx.readCurrent(22);

    while(1);
}


