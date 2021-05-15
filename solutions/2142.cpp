#include <stdio.h>

int main() {
	long long int a, b, c;
	long long int x, y, z;
	long long int j, k;

	scanf("%lld %lld %lld\n", &a, &b, &c);
	scanf("%lld %lld %lld\n", &x, &y, &z);

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
