
#include <stdio.h>
#include <stdlib.h>
#include "DailyReading.h"

/**
* Plain C does not have a "bool" boolean type, so we use an int
* - in C/C++, and int value of 0 is false, anything else is true
**/
int maxGreaterThan(struct DailyReading* day, int refTemp)
{
    return (day->maxTemperature > refTemp);
}

/**
* This function is allocating a new character array and then 
* returning a pointer to it; whoever uses it needs to "free()"
* it after being done with it!
**/
char* maxOnDateString(struct DailyReading* day)
{
    char* str = (char*) malloc(40); 
    // using the "printf to string" library function to format the string
    // - sprintf() does a printf() but it puts the result into the 1st arg
    sprintf(str, "%d degrees on <no-date-yet>", day->maxTemperature);
    return str;
}

