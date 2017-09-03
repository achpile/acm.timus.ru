#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

struct pos {
	int x;
	int y;
	int h;
	float l;
};

std::vector<int> h;
std::vector<pos> p;

float sqr(float x) {
	return x*x;
}

int compare1(const void * a, const void * b) {
	return ( *(int*)b - *(int*)a );
}

int compare2(const void * a, const void * b) {
	return (int)((((pos*)a)->l - ((pos*)b)->l ) * 10);
}

int main() {
	int n, i, t, j, k;
	pos tpos;

	scanf("%d\n", &n);

	for (i = 0; i < n * n; i++) {
		scanf("%d\n", &t);
		h.push_back(t);
	}

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
			tpos.x = i;
			tpos.y = j;
			tpos.h = 0;
			tpos.l = sqrt(sqr(((float)(n-1) / 2.0f) - (float)tpos.x) + sqr(((float)(n-1) / 2.0f) - (float)tpos.y));

			p.push_back(tpos);
		}

	qsort(h.data(), h.size(), sizeof(int), compare1);
	qsort(p.data(), p.size(), sizeof(pos), compare2);

	for (i = 0; i < h.size(); i++)
		p[i].h = h[i];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			for (k = 0; k < p.size(); k++)
				if (i == p[k].x && j == p[k].y)
					printf("%d ", p[k].h);

		printf("\n");
	}

	return 0;
}
