#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	long int n, i;
	std::vector<int> list;

	scanf("%ld\n", &n);
	i = 9;

	if (n == 0) {
		printf("10\n");
		return 0;
	}

	if (n < 10) {
		printf("%ld\n", n);
		return 0;
	}

	while (i > 1)
		if (n % i == 0) {
			list.push_back(i);
			n /= i;
		} else
			i--;

	if (n != 1) {
		printf("-1\n");
		return 0;
	}

	qsort(list.data(), list.size(), sizeof(int), compare);

	for (i = 0; i < list.size(); i++)
		printf("%d", list[i]);

	printf("\n");

	return 0;
}
