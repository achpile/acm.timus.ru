#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>

struct device {
	char n[32];
	int  c;
	int  p;
};

int compare (const void * a, const void * b) {
	return (((device*)b)->c - ((device*)a)->c);
}

std::vector<device> a;

void add(const char *n, int p) {
	int i = 0;
	device r;

	r.c = 1;
	r.p = p;
	strcpy(r.n, n);

	for (i = 0; i < a.size(); i++) {
		if (!strcmp(a[i].n, n)) {
			a[i].c++;

			if (a[i].p > p)
				a[i].p = p;

			return;
		}
	}

	a.push_back(r);
}

int main() {
	int i, p, c, k;
	char n[32];

	for (i = 0; i < 6; i++) {
		scanf("%s\n",  n);
		scanf("%s\n",  n);
		scanf("%d\n", &p);
		add(n, p);
	}

	qsort(a.data(), a.size(), sizeof(device), compare);

	c = a[0].c;
	p = a[0].p;
	k = 0;

	for (i = 1; i < a.size() && a[i].c == c; i++)
		if (p > a[i].p) {
			p = a[i].p;
			k = i;
		}

	printf("%s\n", a[k].n);

	return 0;
}
