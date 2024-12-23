#ifndef HSS_SHIELD_HPP
#define HSS_SHIELD_HPP

#include "hss_types.hpp"
#include "hss.hpp"
#include <vector>


class HssShield {

    protected:
        std::vector<Hss*> switches;
        
    public:
        HssShield(const std::vector<Hss*> &switches);
        ~HssShield();

        /*Error_t init();
        Error_t deinit();

        Error_t switchOn(uint8_t index);
        Error_t switchOff(uint8_t index);*/

        hss::DiagStatus_t readDiagnostics(uint8_t index);
        float readCurrent(uint8_t index);
};


#endif
