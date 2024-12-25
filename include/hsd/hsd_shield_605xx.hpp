#ifndef HSD_SHIELD_605XX_HPP
#define HSD_SHIELD_605XX_HPP

#include "hsd_types.hpp"
#include "hsd_shield.hpp"
#include <iostream>
using namespace std;

namespace hsd
{
    class Bts605xShield : public HsdShield
    {
        public:
            Bts605xShield();
            DiagStatus_t  readDiagx (uint8_t index);
            float readCurrent (uint8_t index);
    };

}


#endif
