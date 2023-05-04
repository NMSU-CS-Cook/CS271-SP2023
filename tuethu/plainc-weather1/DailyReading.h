#ifndef DAILYREADING_H
#define DAILYREADING_H

// Plain C: we do not have a "class" capability but we do have
// the ability to create structured data records, or "structs".
// Here we use this to store our data for each daily reading.
// - all elements are public, there is no "private" keyword.
struct DailyReading
{
   int maxTemperature;
   int minTemperature;
};

// instead of methods, we just write functions with the first parameter
// as a pointer to the data record "object"; in the header file we just
// put their declarations (also known as function prototypes)

int   maxGreaterThan(struct DailyReading* reading, int refTemp);
char* maxOnDateString(struct DailyReading* reading);

#endif // DAILYREADING_H
