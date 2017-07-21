#include <stdio.h>
#include <math.h>
#include <vector>

int main() {
	int           n, i, c, a1, a2, a3;
	long long int t;
	std::vector<long long int> l1, l2, l3;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld\n", &t);
		l1.push_back(t);
	}

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld\n", &t);
		l2.push_back(t);
	}

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld\n", &t);
		l3.push_back(t);
	}

	c  = 0;
	a1 = 0;
	a2 = 0;
	a3 = 0;

	while (a1 < l1.size() && a2 < l2.size() && a3 < l3.size()) {
		if (l1[a1] == l2[a2] && l1[a1] == l3[a3]) {
			c++;
			a1++;
		}

		if (l2[a2] < l1[a1]) a2++;
		else if (l3[a3] < l1[a1]) a3++;
		else a1++;
	}

	printf("%d\n", c);

	return 0;
}
