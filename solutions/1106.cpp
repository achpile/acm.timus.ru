#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <vector>

struct pal {
	int team;
	std::vector<int> pals;
};

int main() {
	int n, i, t, s;
	pal a[100];

	scanf("%d\n", &n);

	for (i = 0; i < n; i++) {
		a[i].team = 1;

		while(1) {
			scanf("%d\n", &t);
			if (t == 0) break;
			t--;
			a[i].pals.push_back(t);
		}
	}

	for (i = 0; i < n; i++) {
		for (t = 0; t < a[i].pals.size(); t++) {
			if (a[i].pals[t] > i && a[i].team == a[a[i].pals[t]].team) {
				if (a[a[i].pals[t]].team == 1) a[a[i].pals[t]].team = 2;
				else                           a[a[i].pals[t]].team = 1;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (t = 0; t < a[i].pals.size(); t++) {
			if (a[i].pals.size() == 1 && a[i].team == a[a[i].pals[0]].team) {
				if (a[a[i].pals[0]].team == 1) a[a[i].pals[0]].team = 2;
				else                           a[a[i].pals[0]].team = 1;
			}
		}
	}

	s = 0;

	for (i = 0; i < n; i++)
		if (a[i].team == 1) s++;

	printf("%d\n", s);

	for (i = 0; i < n; i++)
		if (a[i].team == 1)
			printf("%d ", i + 1);

	printf("\n");

	return 0;
}
