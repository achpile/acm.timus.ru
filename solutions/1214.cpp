#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	long int x, y;

	scanf("%d %d\n", &x, &y);

	if (x < 0 || y < 0)   printf("%ld %ld\n", x, y);
	else if ((x + y) % 2) printf("%ld %ld\n", y, x);
	else                  printf("%ld %ld\n", x, y);

	return 0;
}
