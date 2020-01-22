#include <stdio.h>
#include <vector>

struct pos {
	int x, y;
	pos(int _x, int _y){x=_x; y=_y;};
};

int main() {
	std::vector<pos> ships;
	int n, a, b, i, j, k;
	int minx, maxx, miny, maxy;
	bool found;

	minx = miny =  0;
	maxx = maxy =  0;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d\n", &a, &b);
		ships.push_back(pos(a, b));

		if (a > maxx) maxx = a;
		if (a < minx) minx = a;
		if (b > maxy) maxy = b;
		if (b < miny) miny = b;
	}

	for (i = maxy; i >= miny; i--) {
		for (j = minx; j <= maxx; j++) {
			found = false;

			for (k = 0; k < (int)ships.size(); k++)
				if (ships[k].x == j && ships[k].y == i) {
					found = true;
					break;
				}

			     if (found)            printf("*");
			else if (i == 0 && j == 0) printf("+");
			else if (i == 0)           printf("-");
			else if (j == 0)           printf("|");
			else                       printf(".");
		}
		printf("\n");
	}

	return 0;
}
