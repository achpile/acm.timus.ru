#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int n, x, i, t, i1, i2;
	std::vector<int> list;

	scanf("%d %d\n", &n, &x);

	list.push_back(0);
	list.push_back(x);

	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		list.push_back(t);
	}

	qsort(list.data(), list.size(), sizeof(int), compare);

	for (i = 0; i < list.size(); i++) {
		if (list[i] == 0) i1 = i;
		if (list[i] == x) i2 = i;
	}

	if (x == 0) {
		printf("0 0\n");
		return 0;
	}

	if (abs(i1 - i2) != 1) {
		printf("Impossible\n");
		return 0;
	}

	if (i1 > i2) printf("%d %d\n", list[i1+1] + abs(list[i1+1] - list[i2]), -list[i2]);
	else         printf("%d %d\n", list[i2], -list[i1-1] + abs(list[i1-1] - list[i2]));

	return 0;
}
