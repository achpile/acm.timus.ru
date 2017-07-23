#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

int main() {
	double v, a, k, p, r;

	scanf("%lf %lf %lf\n", &v, &a, &k);

	if (a == 90.0f) {
		printf("0.00\n");
		return 0;
	}

	p = 3.1415926535;

	r  = v * v * k * sin(a * p / 90.0f);
	r /= (10.0f * (k - 1.0f));

	printf("%.2lf\n", r);
}
