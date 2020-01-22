#include <stdio.h>
#include <vector>

int main() {
	unsigned long long int n, p, i, m, y, t;
	unsigned long long int a[1000001];

	for (i = 0; i <= 1000000; i++)
		a[i] = 0;

	scanf("%llu %llu\n", &n, &p);
	for (i = 0; i < n; i++) {
		scanf("%llu", &m);
		a[m]++;
	}

	m = 0;
	y = 0;
	t = 0;

	for (i = 1; i <= p; i++) {
		if (!a[i]) continue;
		if ((a[i] + t) * i <= p) {
			y += a[i];
			t += a[i];
		} else {
			if (t == 0) {
				break;
			} else {
				m++;
				i--;
				t = 0;
			}
		}
	}

	if (t) m++;

	printf("%llu %llu\n", y, m);
	return 0;
}
