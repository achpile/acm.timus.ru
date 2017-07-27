#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <vector>

int main() {
	unsigned long long int a, x, s, i, j, n;
	std::vector<unsigned long long int> list;

	s = 0;

	scanf("%llu %llu\n", &x, &x);

	while (1) {
		if (scanf("%llu %llu", &x, &n) == EOF) break;

		for (i = 0; i < n; i++) {
			scanf("%llu %llu", &x, &a);
			list.push_back(a);
		}

		for (i = 0; i < n; i++)
			for (j = i + 1; j < n; j++)
				s += list[i] * list[j];

		list.clear();
	}

	printf("%llu\n", s);

	return 0;
}
