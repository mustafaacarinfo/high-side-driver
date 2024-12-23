#ifndef HSS_HPP
#define HSS_HPP

class Hss {

public:

    virtual ~Hss() {}

    virtual DiagStatus_t diagRead(float current) = 0;
    
    virtual float readIs(float rSense) = 0;
    
    virtual SwitchStatus_t getSwitchStatus() const = 0;

    virtual Error_t init() = 0;

    virtual Error_t deinit() = 0;

    virtual Error_t enable() = 0;

    virtual Error_t disable() = 0;

}

#endif // HSS_HPP
