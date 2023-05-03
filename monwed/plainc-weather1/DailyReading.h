#ifndef DAILYREADING_H
#define DAILYREADING_H

struct DailyReading
{
   int maxTemperature;
   int minTemperature;
};

// instead of methods, we just write functions with the first parameter
// as a pointer to the data record "object"
int   maxGreaterThan(struct DailyReading* reading, int refTemp);
char* maxOnDateString(struct DailyReading* reading);

#endif // DAILYREADING_H
