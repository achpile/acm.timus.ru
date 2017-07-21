#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	long int n, k, i, max, maxI;
	std::vector<long int> list;

	scanf("%ld\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%ld", &k);
		list.push_back(k);
	}

	maxI = 1;
	max  = list[0] + list[1] + list[2];

	for (i = 2; i < n - 1; i++) {
		k = list[i-1] + list[i] + list[i+1];

		if (k > max) {
			max  = k;
			maxI = i;
		}
	}

	printf("%ld %ld\n", max, maxI + 1);

	return 0;
}
