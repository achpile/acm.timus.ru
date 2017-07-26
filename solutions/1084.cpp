#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

double fs(double a, double r) {
	double x = sqrt(r * r - a * a / 4);
	double alpha = (1.570796293f - atan2(a, (2 * x))) * 2.0f;
	return r * r * (alpha - sin(alpha)) / 2;
}

int main() {
	double a, r, s;

	scanf("%lf %lf\n", &a, &r);

	s = 3.141592585f * r * r;

	     if (r >= a / 1.414213562f) s = a * a;
	else if (r >  a / 2)            s -= 4 * fs(a, r);

	s = round(s * 1000.0f) / 1000.0f;

	printf("%.3lf\n", s);

	return 0;
}
