#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union {
	unsigned int raw;
	struct {
		unsigned char Version : 4;
		unsigned char IHL : 4;
		unsigned char DSCP : 6;
		unsigned char ECN : 2;
		unsigned short TotalLength;
	} parsed;
} packet;

int main() {
	packet current_packet;
	scanf("%d", current_packet.raw);
	printf("%u", current_packet.parsed.Version);
	printf("%u", current_packet.parsed.IHL);
	printf("%u", current_packet.parsed.DSCP);
	printf("%u", current_packet.parsed.ECN);
	printf("%u", current_packet.parsed.TotalLength);
	return 0;
}