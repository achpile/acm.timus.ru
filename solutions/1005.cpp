#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <vector>

std::vector<int> list;
std::vector<int> sums;

void add(int index, int s) {
	int i;

	sums.push_back(s + list[index]);

	for (i = index + 1; i < list.size(); i++)
		add(i, s + list[index]);
}

int main() {
	int n, i, t, s;
	int min, minI;

	scanf("%d\n", &n);

	s = 0;

	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		s += t;
		list.push_back(t);
	}

	for (i = 0; i < n; i++)
		add(i, 0);

	minI = 0;
	min  = abs(s - 2 * sums[0]);

	for (i = 1; i < sums.size(); i++)
		if (abs(s - 2 * sums[i]) < min) {
			minI = i;
			min  = abs(s - 2 * sums[i]);
		}

	printf("%d\n", min);

	return 0;
}
