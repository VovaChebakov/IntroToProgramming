#include <stdio.h>

void swapNumbers(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int num1, num2;

	printf("Enter a 2 numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("Before swapping a is %d and b is %d.\n", num1, num2);
	swapNumbers(&num1, &num2);
	printf("After swapping a is %d and b is %d.", num1, num2);

	return 0;
}