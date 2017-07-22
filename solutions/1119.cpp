#include <stdio.h>
#include <vector>
#include <math.h>
#include <stdlib.h>

struct diag {
	int x;
	int y;
	int i;
};

std::vector<diag> list;

int main() {
	int n, k, i, j, x, y, f;

	float w_s = 100.0f;
	float w_d = 141.421356237f;

	diag t;

	scanf("%d %d\n", &x, &y);
	scanf("%d\n", &n);

	k   = 0;
	f   = 1;
	t.i = 1;

	for (i = 0; i < n; i++) {
		scanf("%d %d\n", &t.x, &t.y);
		list.push_back(t);
	}

	if (n == 0) {
		printf("%d\n", (x + y) * 100);
		return 0;
	}

	while (f) {
		f = 0;
		k++;

		for (i = 0; i < list.size(); i++)
			if (list[i].i == k)
				for (j = 0; j < list.size(); j++)
					if (i != j && list[j].x > list[i].x && list[j].y > list[i].y) {
						list[j].i = k + 1;
						f = 1;
					}
	}

	printf("%.0f\n", round((x + y - 2 * k) * w_s + k * w_d));

	return 0;
}
