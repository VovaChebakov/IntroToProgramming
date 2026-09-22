#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct exam_day {
	int day;
	char month[15];
	int year;
} exam_day;

typedef struct student {
	char name[50];
	char surname[50];
	int groupNumber;
	exam_day date;
} student;



int main(int argc, const char * argv()) {

	student student1;

	printf("Enter a student name: ");
	scanf("%s", &student1.name);
	printf("Enter a student surname: ");
	scanf("%s", &student1.surname);
	printf("Enter a student group number: ");
	scanf("%s", &student1.groupNumber);

	printf("Enter a student exam day: ");
	scanf("%d", &student1.date.day);
	printf("Enter a student exam month(By letters): ");
	scanf("%s", &student1.date.month);
	printf("Enter a student exam year: ");
	scanf("%d", &student1.date.year);

	printf("Student %s %s from %d group have an exam %d %s %d", student1.name, student1.surname, student1.groupNumber, student1.date.day, student1.date.month, student1.date.year);

	return 0;
}