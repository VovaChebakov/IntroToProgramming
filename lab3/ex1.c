#include <stdio.h>

int factorial(int n) {
	int res = 1;
	while (n > 1) {
		res *= n;
		n--;
	}
	return res;
}
int isStrongNumber(int n) {
	int originalNumber = n;
	long long sum = 0;
	while (n > 0) {
		int digit = n % 10;
		sum += factorial(digit);
		n /= 10;
	}
	return (sum == originalNumber);
}

int main() {
	int start, end;
	int found = 0;

	printf("Enter the start of the range: ");
	scanf("%d", &start);

	printf("Enter the end of the range: ");
	scanf("%d", &end);

	if (start > end) {
		int temp = start;
		start = end;
		end = temp;
	}

	printf("The strong numbers are: ");
	for (int i = start; i <= end; i++) {
		if (isStrongNumber(i)) {
			printf("%d ", i);
			found = 1;
		}
	}
}