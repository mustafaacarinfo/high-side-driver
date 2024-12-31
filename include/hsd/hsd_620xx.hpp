#ifndef HSD_620XX_HPP
#define HSD_620XX_HPP

#include "hsd.hpp"

namespace hsd
{
    class Btt620xx : public Hsd
    {
        public:
            Btt620xx();
            DiagStatus_t  readDiagx (uint8_t index);
            float readCurrent (uint8_t index);
    };

}


#endif
