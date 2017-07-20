#include <stdio.h>
#include <math.h>
#include <vector>

struct coord {
	double x;
	double y;
};

double len(coord a) {
	return sqrt(a.x*a.x + a.y*a.y);
}

double dist(coord a1, coord a2) {
	return sqrt((a2.x - a1.x)*(a2.x - a1.x) + (a2.y - a1.y)*(a2.y - a1.y));
}

double rnd(coord left, coord mid, coord right) {
	coord a, b;
	double cosA;

	a.x = mid.x - left.x;
	a.y = mid.y - left.y;
	b.x = mid.x - right.x;
	b.y = mid.y - right.y;

	cosA = (a.x * b.x + a.y * b.y) / (len(a) * len(b));
	return 3.141596 - acos(cosA);
}

int main() {
	int    n, i;
	double r;
	double res;
	coord  t;
	std::vector<coord> list;

	scanf("%d %lf\n", &n, &r);

	for (i = 0; i < n; i++) {
		scanf("%lf %lf\n", &t.x, &t.y);
		list.push_back(t);
	}

	if (n == 1) {
		printf("%.2lf\n", 3.1415926 * r * 2);
		return 0;
	}

	if (n == 2) {
		printf("%.2lf\n", 3.1415926 * r * 2 + 2 * dist(list[0], list[1]));
		return 0;
	}

	res  = 0;
	res += dist(list[0], list[list.size() - 1]);
	res += dist(list[0], list[1              ]);
	res += rnd(list[list.size() - 2], list[list.size() - 1], list[0]) * r;
	res += rnd(list[list.size() - 1], list[0              ], list[1]) * r;

	for (i = 1; i < n - 1; i++) {
		res += dist(list[i], list[i+1]);
		res += rnd(list[i-1], list[i], list[i+1]) * r;
	}

	printf("%.2lf\n", res);

	return 0;
}
