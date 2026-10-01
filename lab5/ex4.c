#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct recipie {
	char name[100];
	int amountOfIngredients;
	char ingredient[10][50];
	char ingredientMass[10][50];
} recipie;

void outputRecipies(recipie *arrayOfRecipies, int amountOfRecipies) {
	for (int i = 1; i <= amountOfRecipies; i++) {
		printf("Recipie %d: \n", i);
		printf("   Dish: %s\n", arrayOfRecipies[i-1].name);
		for (int j = 0; j < arrayOfRecipies[i-1].amountOfIngredients; j++) {
			printf("      Ingredient: %s\n", arrayOfRecipies[i-1].ingredient[j]);
			printf("         Mass of ingredient: %s\n", arrayOfRecipies[i-1].ingredientMass[j]);
		}
	}
}

int main(int argc, const char * argv()) {

	int amountOfRecipies = 0;

	printf("How much recipies do you want to have:");
	scanf("%d", &amountOfRecipies);

	recipie *arrayOfRecipies = (recipie *)malloc(amountOfRecipies * sizeof(recipie));

	for (int i = 1; i <= amountOfRecipies; i++) {
		recipie currentRecipie;
		printf("Enter a name of the recipie %d: ", i);
		scanf("%s", &currentRecipie.name);
		printf("Enter an amount of the ingredients(2-10): ");
		scanf("%d", &currentRecipie.amountOfIngredients);

		for (int j = 1; j <= currentRecipie.amountOfIngredients; j++) {
			printf("Enter an %d ingredient of the %s recipie: ", j, currentRecipie.name);
			scanf("%s", &currentRecipie.ingredient[j-1]);
			printf("Enter an amount of %s in the %s: ", currentRecipie.ingredient[j-1], currentRecipie.name);
			scanf("%s", &currentRecipie.ingredientMass[j-1]);
		}
		arrayOfRecipies[i-1] = currentRecipie;
	}

	outputRecipies(arrayOfRecipies, amountOfRecipies);

	return 0;
}
