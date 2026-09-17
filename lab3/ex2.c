#include <stdio.h>
#include <string.h>

typedef struct {
	char ch;
	int freq;
} CharFreq;

int main() {
	char input[1024];
	int counts[26] = {0};
	CharFreq unique_chars[26];
	int counter = 0;

	printf("Enter a string: ");
	if (fgets(input, sizeof(input), stdin) == NULL) {
		return 0;
	}

	// Count of small english letters
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
			counts[input[i] - 'a']++;
		}
	}

	// Count of all symbols
	for (int i = 0; i < 26; i++) {
		if (counts[i] > 0) {
			unique_chars[counter].ch = (char)('a' + i);
			unique_chars[counter].freq = counts[i];
			counter++;
		}
	}

	// Sorting
	for (int i = 0; i < counter - 1; i++) {
		for (int j = 0; j < counter - i - 1; j++) {
			if ((unique_chars[j].freq < unique_chars[j+1].freq) ||
				(unique_chars[j].freq == unique_chars[j+1].freq && unique_chars[j].ch > unique_chars[j+1].ch)) {
				CharFreq temp = unique_chars[j];
				unique_chars[j] = unique_chars[j+1];
				unique_chars[j+1] = temp;
			}
		}
	}
	// Find most repeated element
	int max_freq = 0;
	if (counter > 0) {
		max_freq = unique_chars[0].freq;
	}

	// Print first string with symbols
	for (int i = 0; i < counter; i++) {
		printf("%c ", unique_chars[i].ch);
	}
	printf("\n");

	// Print a hystogramm
	for (int level = 1; level <= max_freq; level++) {
		for (int i = 0; i < counter; i++) {
			if (unique_chars[i].freq >= level) {
				printf(". ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
