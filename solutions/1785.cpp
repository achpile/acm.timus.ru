#include <stdio.h>
#include <string.h>

int main() {
	int num;

	scanf("%d", &num);

	     if (num <= 4  ) printf("few\n");
	else if (num <= 9  ) printf("several\n");
	else if (num <= 19 ) printf("pack\n");
	else if (num <= 49 ) printf("lots\n");
	else if (num <= 99 ) printf("horde\n");
	else if (num <= 249) printf("throng\n");
	else if (num <= 499) printf("swarm\n");
	else if (num <= 999) printf("zounds\n");
	else                 printf("legion\n");

	return 0;
}
