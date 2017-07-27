#include <stdio.h>
#include <string.h>
#include <vector>

struct sub {
	bool s;
	std::vector<int> l;
};

int main() {
	int i, j, n, m, t1, t2;
	sub a[1000];

	scanf("%d %d\n", &n, &m);

	for (i = 0; i < n; i++)
		a[i].s = false;

	for (i = 0; i < m; i++) {
		scanf("%d %d\n", &t1, &t2);
		t2--;
		t1--;
		a[t2].l.push_back(t1);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &t1);
		t1--;

		for (j = 0; j < a[t1].l.size(); j++) {
			if (!a[a[t1].l[j]].s) {
				printf("NO\n");
				return 0;
			}
		}

		a[t1].s = true;
	}

	printf("YES\n");

	return 0;
}
