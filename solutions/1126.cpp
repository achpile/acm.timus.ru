#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

int a[25000];

int getM(int i, int m) {
	int j, l;
	l = a[i - m + 1];

	for (j = i - m + 2; j <= i; j++)
		if (a[j] > l)
			l = a[j];

	return l;
}

int main() {
	int m, i, k;

	scanf("%d\n", &m);

	i = 0;

	while(1) {
		scanf("%d\n", &k);

		if (k == -1)
			return 0;

		a[i] = k;
		if (i >= m - 1)
			printf("%d\n", getM(i, m));

		i++;
	}
}
