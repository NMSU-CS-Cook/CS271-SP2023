//
// Plain C program that duplicates what the base code for the 
// first weather data processing programming assignment did
// -- reads CSV data file, finds the max and min temperatures
//    in the data record, stores them in a DailyReading structure;
//    builds an array of daily readings, then prints it out
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "DailyReading.h"

// function forward declaration so compiler knows how to call it
// in main()
void readDataFile(FILE* inFile, struct DailyReading* readings[]);

int main(int argc, char* argv[])
{
    // check to make sure we have one command line argument
    if (argc != 2) {
        printf("Error: a filename argument must be given\n");
        return -1;
    }
    FILE* inFile;
    inFile = fopen(argv[1],"r");
    if (!inFile) {
        printf("Error: file %s cannot be opened\n", argv[1]);
        return -1;
    }
    // now we have an open file, so read it in and get our data 
    printf("Reading the data file....\n");
    // Plain C: an array of struct pointers, not dynamically sizeable
    // - we will end our data sequence with a NULL pointer in the array
    struct DailyReading* readings[1000];
    readDataFile(inFile, readings);
    fclose(inFile);
    printf("Done reading file.\n");
    // iterate through all of our readings
    for (int i=0; readings[i] != NULL; i++) {
        // nothing is private, so we can print it out directly
        printf("reading: (%d,%d)\n", readings[i]->minTemperature, 
               readings[i]->maxTemperature);
        // the "maxOnDateString" method is now a function that we pass
        // the data record to as a pointer
        printf("  max string: (%s)\n", maxOnDateString(readings[i]));
        if (maxGreaterThan(readings[i],80)) {
            printf("  a hot day!\n");
        } else {
            printf("  a nice day!\n");
        }
    }
    return 0;
}

/**
* Plain C reading of the data file (which is already opened from main())
* - readings[] is pass by reference, so this function just fills it in
**/
void readDataFile(FILE* inFile, struct DailyReading* readings[])
{
   // Pain C strings are simply arrays of characters; a VALID
   // string is a sequence of non-zero characters followed by 
   // a character value of 0 ('\0', or just 0)
   char line[256]; // max length of line allowed here!
   int readingCount = 0;
   while (fgets(line, sizeof(line), inFile)) {
   	 // remove trailing '\n' from line; fgets() leaves it in
   	 // - strlen() library function returns length of string
       line[strlen(line)-1] = '\0';
       //printf("line (%s)\n", line);
       char* token;
       token = strtok(line,",");
       int tcount = 0;
       int max, min;
       do {
           //printf("   token (%s)\n", token);
           if (tcount == 10)
               max = atoi(token+1);
           else if (tcount == 11)
               min = atoi(token+1);
           tcount++;
       } while ((token = strtok(0,",")));
       //printf("min,max = (%d,%d)\n",min,max);
       // now create a new data record and add it to our sequence
       struct DailyReading* day = malloc(sizeof(struct DailyReading));
       day->maxTemperature = max;
       day->minTemperature = min;
       readings[readingCount++] = day;
   }
   readings[readingCount] = 0;
   return;
}

