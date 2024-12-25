#ifndef HSD_HPP
#define HSD_HPP

#include "hsd_types.hpp"

namespace hsd
{

class Hsd
{
    public:
        ~Hsd() {}

        hsd::DiagStatus_t diagRead(float current);
        
        float readIs(float rSense);
        
        hsd::SwitchStatus_t getSwitchStatus();
    };

}
#endif // HSS_HPP
