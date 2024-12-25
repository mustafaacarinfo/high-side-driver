#ifndef HSD_TYPES_HPP
#define HSD_TYPES_HPP

namespace hsd {

/**
 * @brief Diagnostic status for High-Side Switch
 */
enum DiagStatus_t {
    NORMAL = 0,           // Everything is fine
    SHORT_TcO_GND = 2,     // Short circuit to ground
    SHORT_TO_VSS = 4,     // Short circuit to power supply
    OPEN_LOAD = 5,        // Open load detected
    FAULT_OL_IC = 6       // Fault: Open load with inverse current
};

/**
 * @brief Switch status for High-Side Switch
 */
enum SwitchStatus_t {
    UNINITED = 0,         // Not initialized
    INITED = 1,           // Initialized
    POWER_ON = 2,         // Switch is enabled
    POWER_OFF = 3         // Switch is disabled
};

/**
 * @brief Error codes used across the project
 */
enum Error_t {
    OK = 0,               // Operation successful
    NULLPTR_ERROR = -1,   // Null pointer encountered
    INTF_ERROR = -2,      // Interface error
    INIT_ERROR = -3,      // Initialization error
    DEINIT_ERROR = -4,    // Deinitialization error
    DIAG_READ_ERROR = -5, // Diagnosis read error
    INVALID_CH_ERROR = -6 // Invalid channel error
};

} // namespace hss

#endif // HSS_TYPES_HPP
