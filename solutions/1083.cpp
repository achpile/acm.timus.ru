#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int      num;
	int      count;
	int      i;
	long int res;
	char     excl[24];

	scanf("%d %s", &num, excl);
	count = strlen(excl);
	res   = num;
	i     = 1;

	while (num - count * i > 0)
		res *= (num - (count * i++));

	printf("%ld\n", res);

	return 0;
}
