#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>


int main() {
	double k1, k2, k3;

	scanf("%lf %lf %lf\n", &k1, &k2, &k3);

	printf("%.0lf\n", round((1000.0f * k1 * k2 * k3) / (k1 * k2 + k2 * k3 + k3 * k1)));

	return 0;
}
