#include <stdio.h>
#include <string.h>

int main() {
	char password[4];
	char ideas[4];
	long long attempts = 0;

	printf("Enter a password from 1 to 3 symbols: ");
	scanf("%3s", password);

	// bruteforce for 1 element
	for (char c1 = 32; c1 <= 126; c1++) {
		ideas[0] = c1;
		ideas[1] = '\0';
		attempts++;
		if (strcmp(password, ideas) == 0) {
			printf("found = %s\n", ideas);
			printf("numbers of attempts: %lld\n", attempts);
			return 0;
		}
	}
	// bruteforce for 2 elements
	for (char c1 = 32; c1 <= 126; c1++) {
		for (char c2 = 32; c2 <= 126; c2++) {
			ideas[0] = c1;
			ideas[1] = c2;
			ideas[2] = '\0';
			attempts++;
			if (strcmp(password, ideas) == 0) {
				printf("found = %s\n", ideas);
				printf("numbers of attempts: %lld\n", attempts);
				return 0;
			}
		}
	}
	// bruteforce for 3 elements
	for (char c1 = 32; c1 <= 126; c1++) {
		for (char c2 = 32; c2 <= 126; c2++) {
			for (char c3 = 32; c3 <= 126; c3++) {
				ideas[0] = c1;
				ideas[1] = c2;
				ideas[2] = c3;
				ideas[3] = '\0';
				attempts++;
				if (strcmp(password, ideas) == 0) {
					printf("found = %s\n", ideas);
					printf("numbers of attempts: %lld\n", attempts);
					return 0;
				}
			}
		}
	}
	printf("Password not found (it might be longer than 3 characters or use other characters).\n");
	return 0;
}