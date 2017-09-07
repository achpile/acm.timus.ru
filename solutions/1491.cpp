#include <stdio.h>

int main() {
	int n, i, a, b, c;
	long long int s[100002];
	long long int r;

	scanf("%d\n", &n);

	for (i = 0; i <= n; s[i++] = 0);

	for (i = 0; i <= n; i++) {
		scanf("%d %d %d\n", &a, &b, &c);
		s[a  ] += c;
		s[b+1] -= c;
	}

	r = 0;

	for (i = 1; i <= n; i++)
		printf("%lld ", r += s[i]);

	printf("\n");

	return 0;
}
