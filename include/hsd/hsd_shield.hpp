#ifndef HSD_SHIELD_HPP
#define HSD_SHIELD_HPP

#include "hsd_types.hpp"
#include "hsd.hpp"
#include <vector>

namespace hsd
{
    class HsdShield
    {
        public:
            //virtual HsdShield(); /* TODO */

            virtual hsd::DiagStatus_t readDiagx(uint8_t index) = 0;
            
            virtual float readCurrent(uint8_t index)=0;
    };

}
#endif
