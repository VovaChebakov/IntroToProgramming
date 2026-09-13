#include <stdio.h>

int main() {
	char str[1024];

	FILE *file = fopen("ex5.txt", "w");

	printf("Enter some text: ");

	if (fgets(str, sizeof(str), stdin) != NULL) {
		fputs(str, file);
		printf("Text has written in the file.\n");
	}
	fclose(file);
	return 0;
}