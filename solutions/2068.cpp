#include <stdio.h>
#include <string.h>

int main() {
	long long int  n, i, a, s;

	s = 0;
	scanf("%lld\n", &n);

	for (i = 0; i < n; i++) {
		scanf("%lld\n", &a);
		s += (a - 1) / 2;
	}

	if (s % 2) printf("Daenerys\n");
	else       printf("Stannis\n");

	return 0;
}
