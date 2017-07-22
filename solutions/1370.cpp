#include <stdio.h>
#include <vector>

int main() {
	int n, m, t, i;
	std::vector<int> list;

	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		list.push_back(t);
	}

	m %= n;

	for (i = 0; i < 10; i++) {
		printf("%d", list[(m+i) % n]);
	}

	printf("\n");

	return 0;
}
