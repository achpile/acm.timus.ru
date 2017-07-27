#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

unsigned long long int max(unsigned long long int x, unsigned long long int y) {
	if (x > y) return x;
	else       return y;
}

unsigned long long int min(unsigned long long int a, unsigned long long int b) {
	if (a < b) return a;
	else       return b;
}

unsigned long long int min(unsigned long long int a, unsigned long long int b, unsigned long long int c) {
	if (a <= b && a <= c) return a;
	if (b <= c && b <= a) return b;
	if (c <= a && c <= b) return c;
}

int compare (const void * a, const void * b) {
	return ( *(unsigned long long int*)b - *(unsigned long long int*)a );
}

int main() {
	unsigned long long int n, m, t, i, k, r;
	unsigned long long int a1x, a1y, a2x, a2y;
	std::vector<unsigned long long int> list1;
	std::vector<unsigned long long int> list2;

	scanf("%llu %llu\n", &n, &m);

	for (i = 0; i < n; i++) {
		scanf("%llu\n", &t);
		list1.push_back(t);
	}

	for (i = 0; i < m; i++) {
		scanf("%llu\n", &t);
		list2.push_back(t);
	}

	a1x = list1[0];
	a1y = list2[0];
	a2x = list1[list1.size()-1];
	a2y = list2[list2.size()-1];

	list1.erase(list1.begin());
	list2.erase(list2.begin());

	list1.erase(list1.begin() + list1.size() - 1);
	list2.erase(list2.begin() + list2.size() - 1);

	qsort(list1.data(), list1.size(), sizeof(unsigned long long int), compare);
	qsort(list2.data(), list2.size(), sizeof(unsigned long long int), compare);

	if (list1.size() == 0 && list2.size() == 0) {
		r = max(min(a1x, a2y), min(a2x, a1y));
	} else if (list1.size() == 0) {
		r = max(min(a1x, a2y), min(a2x, a1y));
		r = max(r, min(a1x, a2x, list2[0]));
	} else if (list2.size() == 0) {
		r = max(min(a1x, a2y), min(a2x, a1y));
		r = max(r, min(a1y, a2y, list1[0]));
	} else {
		r = max(min(a1x, a2y), min(a2x, a1y));
		r = max(r, min(a1y, a2y, list1[0]));
		r = max(r, min(a1x, a2x, list2[0]));
	}

	printf("%llu\n", r);

	return 0;
}
