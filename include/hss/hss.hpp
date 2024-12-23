#ifndef HSS_HPP
#define HSS_HPP

#include "hss_types.hpp"

class Hss {

public:

    virtual ~Hss() {}

    virtual hss::DiagStatus_t diagRead(float current) = 0;
    
    virtual float readIs(float rSense) = 0;
    
    virtual hss::SwitchStatus_t getSwitchStatus() const = 0;
/*
    virtual Error_t init() = 0;

    virtual Error_t deinit() = 0;

    virtual Error_t enable() = 0;

    virtual Error_t disable() = 0;
*/
};

#endif // HSS_HPP
