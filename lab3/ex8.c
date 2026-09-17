#include <stdio.h>

// Simple solve for string without spaces
int main() {

	char str[100];

	printf("Enter a string: ");
	if (fgets(str, sizeof(str), stdin)) {
		
		char *ptr = str;
		while (*ptr != '\0') {
			ptr++;
		}
		
		int length = ptr - str - 1;

		printf("String length equal to: %d", length);
	}
	return 0;
}