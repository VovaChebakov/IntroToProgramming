#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union crypt {
	unsigned long long number;
	unsigned char c[sizeof(unsigned long long)];
} crypt;

void encryption(union crypt *data) {
	for (size_t i = 0; i <= sizeof(unsigned long long); i+=2) {
		unsigned char temp = data->c[i];
		data->c[i] = data->c[i+1];
		data->c[i+1] = temp;
	}
}

int main(int argc, const char * argv()) {
	crypt n1;

	printf("Enter a long long int number: ");
	scanf("%llu", &n1.number);

	encryption(&n1);

	printf("Result: %d", n1.number);

	return 0;
}
