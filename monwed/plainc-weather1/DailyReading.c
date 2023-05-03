
#include "DailyReading.h"

int maxGreaterThan(struct DailyReading reading, int refTemp)
{
    return reading.maxTemperature > refTemp;
}

/**
std::string DailyReading::maxOnDateString()
{
    return std::to_string(maxTemperature) + 
           std::string(" degrees on <no-date-yet>");
}
**/
