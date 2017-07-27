#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int main() {
	int n, i, j, x, y;
	int a[100][100];

	int s;
	int m;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		scanf("%d\n", &a[i][j]);

	s = 0;
	m = -1000;

	for (i = 1; i <= n; i++) {
		for (j = 0; j <= n - i; j++) {
			s = 0;

			for (x = 0; x < n; x++) {
				for (y = j; y < j + i; y++)
					s += a[x][y];

				if (s > m) m = s;
				if (s < 0) s = 0;
			}
		}
	}

	printf("%d\n", m);

	return 0;
}
