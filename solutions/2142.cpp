#include <stdio.h>

int main() {
	long a, b, c;
	long x, y, z;
	long j, k;

	scanf("%ld %ld %ld\n", &a, &b, &c);
	scanf("%ld %ld %ld\n", &x, &y, &z);

	j = a - x;
	k = b - y;

	if ((j < 0 && c + j < 0) ||
	    (k < 0 && c + k < 0)) {
			printf("There are no miracles in life\n");
			return 0;
	}

	c = c + j + k;

	if (c >= z) printf("It is a kind of magic\n");
	else        printf("There are no miracles in life\n");

	return 0;
}
