#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	long int a, b, c;

	scanf("%ld\n%ld\n%ld", &a, &b, &c);

	if (b > 1 && c > 1) printf("%ld\n", a - b * c);
	else                printf("%ld\n", a - b - c);

	return 0;
}
