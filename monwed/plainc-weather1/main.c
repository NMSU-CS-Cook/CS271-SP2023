
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "DailyReading.h"

void readDataFile(FILE* inFile, struct DailyReading* readings[]);

int main(int argc, char* argv[])
{
    printf("Hello world\n");
    struct DailyReading day;
    day.maxTemperature = 81;
    day.minTemperature = 43;
    printf("Daily reading: (%d,%d)\n", day.minTemperature, day.maxTemperature);
    if (maxGreaterThan(day,79)) {
        printf("Is greater!\n");
    } else {
        printf("Is less than!\n");
    }
    // check to make sure we have one command line argument
    if (argc != 2) {
        printf("Error: a filename argument must be given\n");
        return -1;
    }
    struct DailyReading* readings[1000];
    FILE* inFile;
    inFile = fopen(argv[1],"r");
    if (!inFile) {
        printf("Error: file %s cannot be opened\n", argv[1]);
        return -1;
    }
    // now we have an open file, so read it in and get our data 
    printf("Reading the data file....\n");
    readDataFile(inFile, readings);
    fclose(inFile);
    printf("done.\n");;
    for (int i=0; i < 10; i++)
        printf("reading: %d\n",readings[i]->minTemperature);
    return 0;
}

void readDataFile(FILE* inFile, struct DailyReading* readings[])
{
   char line[256];
   int readingCount = 0;
   while (fgets(line, sizeof(line), inFile)) {
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
       } while (token = strtok(0,","));
       printf("min,max = (%d,%d)\n",min,max);
       struct DailyReading* day = malloc(sizeof(struct DailyReading));
       day->maxTemperature = max;
       day->minTemperature = min;
       readings[readingCount++] = day;
   }
   readings[readingCount] = 0;
   return;
}



/***
    // now use the dataset in a function
    printDataset(dataset);
    return 0;
}

void readDataFile(std::ifstream& inFile, std::vector<DailyReading*>& dataset)
{
    std::string line;
    int max=0;
    // read first line of file (data column titles) and throw it away
    std::getline(inFile, line);
    // read the rest of the file line by line; this is safer 
    // than trying to parse the lines as you read the data in
    while (std::getline(inFile, line)) {
        // uncomment the next line if you are debugging and need to
        // see what each line looks like
        //std::cout << "line is [" << line << "]\n";
        if (line.length() < 2)
            continue; // probably at end of file
        // now treat the line itself as an input stream (from a string!)
        std::istringstream lineStream(line);
        std::string piece;
        int column = 0;
        // loop below separates pieces of the line by commas
        while (std::getline(lineStream, piece, ',')) {
            // remove quotation marks on data, if they exist
            if (piece.front() == '"' && piece.back() == '"')
                piece = piece.substr(1,piece.size()-2);
            // uncomment the next line if you are debugging and need to
            // see what each piece looks like
            //std::cout << "  piece [" << piece << "]\n";
            column++;
            if (column == 15) { // max temp column
                max = std::stoi(piece);
            }
        }
        // make a new DailyReading object
        DailyReading* today = new DailyReading(max);
        // add this object to our collection
        dataset.push_back(today);
    }
}

void printDataset(std::vector<DailyReading*>& dataset)
{
    std::cout << "Data printout for " << dataset.size() << " readings\n";
    for (DailyReading* day: dataset) {
        std::cout << "day: (" << day->maxOnDateString() << ")\n";
    }
}
**/
