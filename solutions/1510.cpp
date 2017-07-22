#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(long long int*)a - *(long long int*)b );
}

int main() {
	std::vector<long long int> list;
	long long int id, mid;
	long int i, n, a, m;

	scanf("%ld\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%lld\n", &id);
		list.push_back(id);
	};

	qsort(list.data(), list.size(), sizeof(long long int), compare);

	id  = list[0];
	mid = list[0];
	a   = 1;
	m   = 1;

	for (i = 1; i < n; i++) {
		if (list[i] == id) {
			a++;
		} else {
			if (a > m) {
				m   = a;
				mid = id;
			}

			id = list[i];
			a  = 1;
		}
	}

	if (a > m) {
		m   = a;
		mid = id;
	}

	printf("%lld\n", mid);

	return 0;
}
