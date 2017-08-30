#include <stdio.h>
#include <math.h>

struct vect {
	int x;
	int y;
};

double sqr(double x) {
	return x*x;
}

double dist(double x, double y, vect a) {
	return sqrt(sqr(x - (double)a.x) + sqr(y - (double)a.y));
}

int main() {
	int n, i, a;
	vect demons[100];
	vect sum;
	double x, y, r;

	sum.x = 0;
	sum.y = 0;
	a = 0;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d\n", &demons[i].x, &demons[i].y);

		sum.x += demons[i].x;
		sum.y += demons[i].y;
	}

	if (sum.x % n == 0 && sum.y % n == 0) {
		sum.x /= n;
		sum.y /= n;

		for (i = 0; i < n; i++)
			if (sum.x == demons[i].x && sum.y == demons[i].y) {
				a = 1;
				break;
			}

		x = (double)sum.x;
		y = (double)sum.y;

		if (a)
			x += 0.1f;
	} else {
		x = (double)sum.x / (double)n;
		y = (double)sum.y / (double)n;
	}

	r = dist(x, y, demons[0]);

	for (i = 1; i < n; i++)
		if (r < dist(x, y, demons[i]))
			r = dist(x, y, demons[i]);

	printf("%.10f %.10f %.10f\n", x, y, r);

	return 0;
}
