#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int n, i;
	double x, t; 

	scanf("%lf %d\n", &x, &n);

	for (i = 0; i < n; i++) {
		scanf("%lf\n", &t);
		x -= floor(100.0f * t / 3.0f) / 100.0f;

		if (x < 0.0f) {
			printf("Free after %d times.\n", i+1);
			return 0;
		}
	}


	printf("Team.GOV!\n");

	return 0;
}
