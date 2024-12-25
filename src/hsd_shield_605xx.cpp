
#include <iostream>

#include "hsd_types.hpp"
#include "hsd_shield_605xx.hpp"
#include "hsd.hpp"

using namespace hsd;
using namespace std;


Bts605xShield::Bts605xShield()
{

}


float Bts605xShield::readCurrent (uint8_t index)
{

    return 1.1;
}

DiagStatus_t Bts605xShield::readDiagx(uint8_t x)
{
    DiagStatus_t diagStatus = NORMAL;

    cout <<  endl;

    cout << "adana" << endl;

    return diagStatus;
}