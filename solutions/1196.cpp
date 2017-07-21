#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <string>

int compare (const void * a, const void * b) {
	return ( *(long long int*)a - *(long long int*)b );
}

int main() {
	int n, i, j, c;
	long long int t;
	std::vector<long long int> l1;
	std::vector<long long int> l2;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%lld", &t);
		l1.push_back(t);
	}

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%lld", &t);
		l2.push_back(t);
	}

	qsort(l2.data(), l2.size(), sizeof(long long int), compare);

	j = 0;
	c = 0;
	for (i = 0; i < l1.size() && j < l2.size(); i++) {
		while (l1[i] > l2[j] && j < l2.size())
			j++;

		while (l1[i] == l2[j] && j < l2.size()) {
			c++;
			j++;
		}
	}

	printf("%d\n", c);

	return 0;
}
