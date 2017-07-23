#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

int main() {
	int i;
	int m[100000], a[100000];

	a[0] = 0;
	a[1] = 1;
	m[0] = 0;
	m[1] = 1;

	for (i = 2; i < 100000; i++) {
		if (i % 2) a[i] = a[i/2] + a[i/2 + 1];
		else       a[i] = a[i/2];

		if (a[i] > m[i-1])
			m[i] = a[i];
		else
			m[i] = m[i-1];
	}

	while (1) {
		scanf("%d\n", &i);

		if (i == 0) return 0;

		printf("%d\n", m[i]);
	}
}
