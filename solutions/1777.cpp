#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	if (*(unsigned long long int*)a > *(unsigned long long int*)b) return  1;
	if (*(unsigned long long int*)a < *(unsigned long long int*)b) return -1;
	return 0;
}

int main() {
	unsigned long long int n, i, r, min;
	std::vector<unsigned long long int> list;

	for (i = 0; i < 3; i++) {
		scanf("%lld", &n);
		list.push_back(n);
	}

	r = 1;

	while (1) {
		qsort(list.data(), list.size(), sizeof(unsigned long long int), compare);
		min = list[1] - list[0];

		for (i = 1; i < list.size() - 1; i++)
			if (min > list[i+1] - list[i])
				min = list[i+1] - list[i];

		if (min == 0) break;

		r++;
		list.push_back(min);
	}

	printf("%llu\n", r);

	return 0;
}
