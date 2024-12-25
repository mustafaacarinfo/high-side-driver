#ifndef VARIANTS_HPP
#define VARIANTS_HPP



#include <cstdint>


struct BtxVariants_t 
{
    const char* type;
    uint32_t kilis;
    float iisFault;
    float iisOl; 
    float iisEn;   
};

extern const BtxVariants_t BTT60502;
extern const BtxVariants_t BTT62004;

#endif
