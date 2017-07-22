#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>

int compare (const void * a, const void * b) {
	return ( *(double*)a - *(double*)b );
}

int main() {
	int n, i;
	std::vector<double> list;
	double t;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf\n", &t);
		list.push_back(t);
	}

	while (list.size() > 1) {
		qsort(list.data(), list.size(), sizeof(double), compare);
		list[list.size() - 2] = 2.0f * sqrt(list[list.size() - 2] * list.back());
		list.pop_back();
	}

	printf("%.2lf\n", list[0]);

	return 0;
}
