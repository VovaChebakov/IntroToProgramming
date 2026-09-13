#include <stdio.h>

int main() {

	int n = 0;

	printf("Input a number to bake a isosceles triangle: ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		for (int k = n-i; k > 0; k--) {
			printf(" ");
		}
		for (int j = 0; j < 2*i-1; j++) {
			printf("*");
		}
		printf("\n");
	}
}