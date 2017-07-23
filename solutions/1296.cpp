#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int main() {
	long int n, i, t, a, f, m;
	std::vector<long int> list;

	scanf("%ld\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%ld\n", &t);
		list.push_back(t);
	}

	int max_so_far = -1000, max_ending_here = 0;

	for (int i = 0; i < list.size(); i++) {
		max_ending_here = max_ending_here + list[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	printf("%d\n", max_so_far > 0 ? max_so_far : 0);

	return 0;
}
