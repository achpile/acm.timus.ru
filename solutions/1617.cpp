#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

int compare (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int main() {
	int n, i, t, c;
	std::vector<int> list;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%d\n", &t);
		list.push_back(t);
	}

	c = 0;
	qsort(list.data(), list.size(), sizeof(int), compare);

	for (i = 0; i < n - 3; i++) {
		if (list[i] == list[i+1] && list[i] == list[i+2] && list[i] == list[i+3]) {
			c++;
			i+=3;
		}
	}

	printf("%d\n", c);

	return 0;
}
