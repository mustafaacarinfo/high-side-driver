#ifndef HSD_HPP
#define HSD_HPP

#include "hsd_types.hpp"
#include <iostream>

namespace hsd
{

class Hsd
{
    public:
       // virtual ~Hsd() {};
        virtual   DiagStatus_t  readDiagx (uint8_t index) = 0;
        virtual   float readCurrent (uint8_t index) = 0;
        
        //virtual hsd::SwitchStatus_t getSwitchStatus();
    };

}
#endif // HSS_HPP
