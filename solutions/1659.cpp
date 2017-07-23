#include <stdio.h>
#include <math.h>
#include <vector>

struct coord {
	double x;
	double y;
};

int main() {
	coord a1, b1, c1;
	coord a2, b2, c2;
	coord a3, b3, c3;
	coord center;


	scanf("%lf %lf\n", &a1.x, &a1.y);
	scanf("%lf %lf\n", &b1.x, &b1.y);
	scanf("%lf %lf\n", &c1.x, &c1.y);

	center.x = (a1.x + b1.x + c1.x) / 3.0f;
	center.y = (a1.y + b1.y + c1.y) / 3.0f;

	a2.x = 2 * center.x - a1.x;
	a2.y = 2 * center.y - a1.y;
	b2.x = 2 * center.x - b1.x;
	b2.y = 2 * center.y - b1.y;
	c2.x = 2 * center.x - c1.x;
	c2.y = 2 * center.y - c1.y;

	a3.x = center.x + (a1.x - center.x) / 10.0f;
	a3.y = center.y + (a1.y - center.y) / 10.0f;
	b3.x = center.x + (b1.x - center.x) / 10.0f;
	b3.y = center.y + (b1.y - center.y) / 10.0f;
	c3.x = center.x + (c1.x - center.x) / 10.0f;
	c3.y = center.y + (c1.y - center.y) / 10.0f;

	b3.x += (center.x - a3.x);
	b3.y += (center.y - a3.y);
	c3.x += (center.x - a3.x);
	c3.y += (center.y - a3.y);
	a3.x  =  center.x;
	a3.y  =  center.y;

	printf("%.10lf %.10lf\n", a3.x, a3.y);
	printf("%.10lf %.10lf\n", b3.x, b3.y);
	printf("%.10lf %.10lf\n", c3.x, c3.y);
	printf("%.10lf %.10lf\n", a2.x, a2.y);
	printf("%.10lf %.10lf\n", b2.x, b2.y);
	printf("%.10lf %.10lf\n", c2.x, c2.y);

	return 0;
}
