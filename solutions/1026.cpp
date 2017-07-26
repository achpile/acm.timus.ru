#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int n, i, t;
	char a[4];
	std::vector<int> list;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d\n", &t);
		list.push_back(t);
	}

	qsort(list.data(), list.size(), sizeof(int), compare);
	scanf("%s\n", a);

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d\n", &t);
		printf("%d\n", list[t-1]);
	}

	return 0;
}
