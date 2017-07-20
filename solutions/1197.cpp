#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int cnt(const char *str) {
	int x, y;

	x   = str[0] - 97;
	y   = str[1] - 49;

	if (x > 3) x = 7 - x;
	if (y > 3) y = 7 - y;

	     if (x == 0 && y == 0) return 2;
	else if (x == 1 && y == 0) return 3;
	else if (x == 0 && y == 1) return 3;
	else if (x == 0          ) return 4;
	else if (y == 0          ) return 4;
	else if (x == 1 && y == 1) return 4;
	else if (x == 1          ) return 6;
	else if (y == 1          ) return 6;
	else                       return 8;
}

int main() {
	int  n, i;
	char a[3];

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%s\n", a);
		printf("%d\n", cnt(a));
	}

	return 0;
}
