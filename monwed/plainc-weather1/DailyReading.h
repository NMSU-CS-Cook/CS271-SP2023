#ifndef DAILYREADING_H
#define DAILYREADING_H

struct DailyReading
{
   int maxTemperature;
   int minTemperature;
};

int maxGreaterThan(struct DailyReading reading, int refTemp);

#endif // DAILYREADING_H
