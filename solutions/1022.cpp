#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <string>


struct mars {
	int was;
	int i;
	int c;

	std::vector<mars*> parents;
};

mars a[100];

void process(mars *item) {
	int i;

	for (i = 0; i < item->parents.size(); i++)
		process(item->parents[i]);

	if (!item->was) {
		printf("%d ", item->i);
		item->was = 1;
	}
}

int main() {
	int n, t, i;

	for (i = 0; i < 100; i++) {
		a[i].was = 0;
		a[i].c   = 0;
		a[i].i   = i+1;
	}


	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		while (1) {
			scanf("%d", &t);
			if (t == 0) break;

			a[t-1].parents.push_back(&a[i]);
			a[i].c++;
		}
	}

	for (i = 0; i < n; i++)
		if (a[i].c == 0)
			process(&a[i]);

	printf("\n");

	return 0;
}
