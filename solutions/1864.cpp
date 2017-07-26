#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	std::vector<long int> list;
	long int n, i, t, s, r;

	scanf("%ld\n", &n);

	s = 0;

	for (i = 0; i < n; i++) {
		scanf("%ld", &t);
		list.push_back(t * 10000);
		s += t * 10000;
	}

	r = s / (n + 1);
	s = 0;

	for (i = 0; i < n; i++) {
		list[i] -= r;
		if (list[i] < 0)
			list[i] = 0;

		s += list[i];
	}

	for (i = 0; i < n; i++)
		printf("%ld ", list[i] * 100 / s);

	printf("\n");

	return 0;
}
