#include <iostream>

#include "hsd_605xx.hpp"

using namespace hsd;
using namespace std;

Btt605xx::Btt605xx()
{

}

float Btt605xx::readCurrent (uint8_t index)
{
    cout << "adana" << index << endl << std::flush;

    return 1.1;
}

DiagStatus_t Btt605xx::readDiagx(uint8_t x)
{
    uint8_t y = x;
    DiagStatus_t diagStatus = OPEN_LOAD;

    cerr << diagStatus << endl;
    cerr << x << endl;
    cerr << (int)(x) << endl;
    cerr << static_cast<int>(y) << endl;


    x = 22;

    return diagStatus;
}