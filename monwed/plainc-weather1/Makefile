#
# Makefile for plain C version of weather data reading
#

CC = gcc
CFLAGS = -Wall

weather: main.o DailyReading.o
	gcc -o weather main.o DailyReading.o

test:
	./weather weather-small.csv

clean:
	rm -rf *.o weather

