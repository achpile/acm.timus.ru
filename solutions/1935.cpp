#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int i, n, a, s;
	std::vector<int> list;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		list.push_back(a);
	}

	qsort(list.data(), list.size(), sizeof(int), compare);

	s = list[0] + list[n-1];

	for (i = 0; i < n - 1; i++)
		s += list[i+1];

	printf("%d\n", s);

	return 0;
}
