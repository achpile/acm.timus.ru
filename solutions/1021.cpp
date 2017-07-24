#include <stdio.h>
#include <stdlib.h>
#include <vector>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	std::vector<int> list;

	int a, b, i, j;

	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &b);
		list.push_back(b);
	}

	qsort(list.data(), list.size(), sizeof(int), compare);

	scanf("%d", &a);
	for (i = 0; i < a; i++) {
		scanf("%d", &b);

		for (j = 0; j < list.size() && b + list[j] <= 10000; j++)
			if (list[j] + b == 10000) {
				printf("YES\n");
				return 0;
			}
	}

	printf("NO\n");

	return 0;
}
