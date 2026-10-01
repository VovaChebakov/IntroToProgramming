#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BASE_YEAR 1900

typedef struct {
	unsigned short day : 5;
	unsigned short month : 4;
	unsigned short year : 7;
} birthday;

int main() {
	birthday my;
	my.day = 22;
	my.month = 07;
	my.year = 2008 - BASE_YEAR;
	
	printf("Day: %d\n", my.day);
	printf("Month: %d\n", my.month);
	printf("Year: %d\n", my.year + BASE_YEAR);

	printf("Size of a structure: %lu", sizeof(my));
}