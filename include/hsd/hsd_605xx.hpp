#ifndef HSD_605XX_HPP
#define HSD_605XX_HPP

#include "hsd.hpp"

namespace hsd
{
    class Btt605xx : public Hsd 
    {
        public:
            Btt605xx();
            DiagStatus_t  readDiagx (uint8_t index);
            float readCurrent (uint8_t index);
    };

}


#endif
