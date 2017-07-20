#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int    i, n, a;
	std::vector<int> list;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		list.push_back(a);
	};

	qsort(list.data(), list.size(), sizeof(int), compare);

	n = (n + 1) / 2;
	a = 0;

	for (i = 0; i < n; i++)
		a += (list[i] / 2) + 1;

	printf("%d\n", a);

	return 0;
}
