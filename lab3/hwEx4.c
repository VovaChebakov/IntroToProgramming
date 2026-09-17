#include <stdio.h>

// Function to input Matrix
void inputMatrix(int *matrix, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("Enter the element [%d][%d]: ", i, j);
			scanf("%d", matrix + i*columns + j);
		}
	}
}
// Function to output Matrix
void outputMatrix(int *matrix, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%d\t", *(matrix + i*columns + j));
		}
		printf("\n");
	}
}

int main() {
	int rows;
	int columns;

	printf("Enter len of main array: ");
	scanf("%d", &rows);
	printf("Enter len of sub-arrays: ");
	scanf("%d", &columns);

	int arr[rows][columns];

	printf("Input matrix: \n");
	inputMatrix((int *)arr, rows, columns);

	printf("\nOutput matrix: \n");
	outputMatrix((int *)arr, rows, columns);

	return 0;
}