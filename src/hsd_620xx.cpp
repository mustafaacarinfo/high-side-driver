
#include <iostream>

#include "hsd_620xx.hpp"

using namespace hsd;
using namespace std;


Btt620xx::Btt620xx()
{

}


float Btt620xx::readCurrent (uint8_t index)
{
    cout << "badana" << index << endl;

    return 2.1;
}

DiagStatus_t Btt620xx::readDiagx(uint8_t x)
{
    DiagStatus_t diagStatus = NORMAL;

    cout << "badana" << x << endl;

    return diagStatus;
}