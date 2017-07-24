#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	double b, x, q, r;
	int i;

	scanf("%lf %lf %lf", &b, &x, &q);
	i = 0;
	q = 1.0f - q / 100.0f;

	while (b > x) {
		b *= q;
		i++;
	}

	printf("%d\n", i);

	return 0;
}
