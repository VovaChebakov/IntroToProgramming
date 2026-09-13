#include <stdio.h>

void rectangle() {
	int width = 0;
	int height = 0;

	printf("Input a width of rectangle: ");
	scanf("%d", &width);
	printf("Input a height of rectangle: ");
	scanf("%d", &height);

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
void rightTriangle() {
	int num1 = 0;

	printf("Input a number to make a right triangle: ");
	scanf("%d", &num1);

	for (int i = 0; i <= num1; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
int trapezoid() {
	int min_base = 0;
	int max_base = 0;

	printf("Input a small base of a trapezoid: ");
	scanf("%d", &min_base);
	printf("Input a big base of a trapezoid: ");
	scanf("%d", &max_base);

	if (min_base > max_base) {
		printf("Ошибка: меньшее основание не должно быть больше максимального!\n");
		return 1;
	}

	for (int i = min_base; i <= max_base; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = max_base; i >= min_base; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void isoscelesTriangle() {
	int num2 = 0;

	printf("Input a number to make a isosceles triangle: ");
	scanf("%d", &num2);

	for (int i = 0; i <= num2; i++) {
		for (int k = num2 - i; k > 0; k--){
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int typeOfFigure = 0;

	printf("Input a number of figure (1 - rectangle, 2 - right triangle, 3 - trapezoid, 4 - isosceles triangle: ");
	scanf("%d", &typeOfFigure);

	switch (typeOfFigure) {
		case 1:
			rectangle();
			break;
		case 2:
			rightTriangle();
			break;
		case 3:
			trapezoid();
			break;
		case 4:
			isoscelesTriangle();
			break;
		default:
			printf("ERROR: You need to input a number of figure (1 - rectangle, 2 - triangle, 3 - trapezoid, 4 - isosceles triangle");
	}
}