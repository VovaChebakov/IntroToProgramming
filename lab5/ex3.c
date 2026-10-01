#include <stdio.h>

typedef enum {
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
} weekDays;

char* convertDaysToText(weekDays day);

int main() {
	int n;

	printf("Enter a number of day(1 - Monday, 7 - Sunday): ");
	scanf("%d", &n);

	printf("%s", convertDaysToText(n));
}

char* convertDaysToText(weekDays day) {
	switch (day) {
		case 1:
			return "Monday";
		case 2:
			return "Tuesday";
		case 3:
			return "Wednesday";
		case 4:
			return "Thursday";
		case 5:
			return "Friday";
		case 6:
			return "Saturday";
		case 7:
			return "Sunday";
	}
}
