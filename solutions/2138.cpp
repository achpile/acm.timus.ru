#include <stdio.h>

int main() {
	unsigned int a, b;
	char str[32];

	scanf("%s\n", str);
	scanf("%u\n", &a);

	b = ((a & 0xff      ) << 24) +
	    ((a & 0xff00    ) << 8 ) +
	    ((a & 0xff0000  ) >> 8 ) +
	    ((a & 0xff000000) >> 24);

	printf("%u\n", b);

	return 0;
}
