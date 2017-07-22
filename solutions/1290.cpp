#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int n, i, a;
	std::vector<int> list;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d\n", &a);
		list.push_back(a);
	}

	qsort(list.data(), list.size(), sizeof(int), compare);

	for (i = list.size() - 1; i >= 0; i--)
		printf("%d\n", list[i]);

	return 0;
}
