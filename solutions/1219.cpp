#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main() {
	int i, j;
	long long k;

	i = 'a';
	j = 'z' - 'a' + 1;

	srand(time(NULL));

	for (k = 0; k < 1000000; k++)
		printf("%c", rand() % j + i);

	printf("\n");

	return 0;
}
