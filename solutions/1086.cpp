#include <stdio.h>
#include <math.h>
#include <vector>
#include <string.h>
#include <stdlib.h>


int main() {
	std::vector<int> a;
	int i, j, l, f;

	a.push_back(2);
	a.push_back(3);
	a.push_back(5);
	a.push_back(7);

	for (i = 11; a.size() < 15000; i+=2) {
		f = 1;
		l = sqrt(i);

		for (j = 3; j <= l; j++)
			if (i % j == 0) {
				f = 0;
				break;
			}

		if (f)
			a.push_back(i);
	}

	scanf("%d\n", &i);
	for (j = 0; j < i; j++) {
		scanf("%d\n", &l);
		printf("%d\n", a[l-1]);
	}

	return 0;
}
