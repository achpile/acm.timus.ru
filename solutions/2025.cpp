#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <vector>

int main() {
	std::vector<int> list;
	int n, k, a, i, j, x;
	long long int s;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		s = 0;
		list.clear();

		scanf("%d %d\n", &k, &a);

		while (a >= 1) {
			x = k / a;
			a--;
			k -= x;

			for (j = 0; j < list.size(); j++)
				s += x * list[j];

			list.push_back(x);
		}

		printf("%lld\n", s);
	}

	return 0;
}
