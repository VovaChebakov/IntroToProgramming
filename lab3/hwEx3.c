#include <stdio.h>
#include <string.h>

int main() {

	char str[100];

	printf("Enter a string: ");
	scanf("%s", str);

	char *pStr = str;

	printf("%s", pStr);
	return 0;
}