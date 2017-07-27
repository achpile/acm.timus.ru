#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <vector>

struct rep {
	int s;
	int e;
};

int compare (const void * a, const void * b) {
	return ( ((rep*)a)->e - ((rep*)b)->e );
}

int main() {
	int i, n, max, last;
	rep list[100000];

	scanf("%d\n", &n);

	max  = 0;
	last = 0;

	for (i = 0; i < n; i++)
		scanf("%d %d\n", &list[i].s, &list[i].e);

	qsort(list, n, sizeof(rep), compare);

	for (i = 0; i < n; i++) {
		if (last < list[i].s) {
			max++;
			last = list[i].e;
		}
	}

	printf("%d\n", max);

	return 0;
}
