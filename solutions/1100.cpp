#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>

struct cm {
	long int id;
	long int score;
};

bool compare(cm a, cm b) {
	return (b.score < a.score);
}

int main() {
	long int i, n, a;
	cm       t;
	std::vector<cm> list;

	scanf("%ld\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%ld %ld\n", &t.id, &t.score);
		list.push_back(t);
	};

	std::stable_sort(list.begin(), list.end(), compare);

	for (i = 0; i < n; i++)
		printf("%ld %ld\n", list[i].id, list[i].score);

	return 0;
}
