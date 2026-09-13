#include <stdio.h>
#include <string.h>

void replace(char *str) {
	int length = strlen(str);
	int i = 0;
	int j = length - 1;

	while (j > i) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
}

int main() {
	char inputStr[] = "";

	printf("Input a string: ");
	scanf("%s", &inputStr);


	printf("%s\n", inputStr);
	replace(inputStr);
	printf("%s", inputStr);
}