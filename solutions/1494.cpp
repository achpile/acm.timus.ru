#include <stdio.h>
#include <ctype.h>
#include <vector>

int main() {
	int i, n, t, j;
	std::vector<int> stack;

	int expect;
	int max;

	expect = 1;
	max    = 0;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%d\n", &t);

		if (t > max) {
			for (j = max+1; j <= t; j++)
				stack.push_back(j);

			max = t;
		}

		if (t == stack.back()) {
			stack.pop_back();
		} else {
			printf("Cheater\n");
			return 0;
		}
	}

	printf("Not a proof\n");

	return 0;
}
