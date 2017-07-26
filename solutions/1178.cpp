#include <stdio.h>
#include <math.h>
#include <vector>
#include <stdlib.h>

struct city {
	float x;
	float y;
	int   c;
};

int compare (const void * a, const void * b) {
	return ( ((city*)a)->x - ((city*)b)->x );
}

int main() {
	int  n, i;
	city t;
	std::vector<city> list;

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%f %f\n", &t.x, &t.y);
		t.c = i + 1;
		list.push_back(t);
	}

	qsort(list.data(), list.size(), sizeof(city), compare);

	for (i = 0; i < n; i+=2) {
		printf("%d %d\n", list[i].c, list[i+1].c);
	}

	return 0;
}
