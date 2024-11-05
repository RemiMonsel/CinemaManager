#ifndef GENERICLIB_H
#define GENERICLIB_H

#include <cstdint> //use for uint8_t and uint16_t

struct DateStruct {
    uint8_t day;
    uint8_t month;
    uint16_t year;
};

struct DateTimeStruct {
    uint8_t day;
    uint8_t month;
    uint16_t year;
    uint8_t hour;
    uint8_t minute;
};

#endif