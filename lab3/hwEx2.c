#include <stdio.h>
#include <stdbool.h>

int main() {
	int num;
	printf("Enter a len of the array: ");
	scanf("%d", &num);

	int arr[1000];

	printf("Enter an %d elements of array: ", num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	int places[1000] = {0};

	for (int i = 0; i < num; i++) {
		if (places[arr[i]] == 0) {
			printf("%d ", arr[i]);
			places[arr[i]] = 1;
		}
	}
	return 0;
}