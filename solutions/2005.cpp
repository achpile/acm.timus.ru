#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <stdlib.h>

struct path {
	char *route;
	int   dist;
};

int compare (const void * a, const void * b) {
	return (((path*)a)->dist - ((path*)b)->dist);
}


int main() {
	int a[6][6], i, j;
	std::vector<path> routes;
	path r;

	for (i = 1; i < 6; i++)
		for (j = 1; j < 6; j++)
			scanf("%d", &a[i][j]);

	r.route = "1 2 3 4 5";
	r.dist  = a[1][2] + a[2][3] + a[3][4] + a[4][5];
	routes.push_back(r);

	r.route = "1 3 2 4 5";
	r.dist  = a[1][3] + a[3][2] + a[2][4] + a[4][5];
	routes.push_back(r);

	r.route = "1 4 3 2 5";
	r.dist  = a[1][4] + a[4][3] + a[3][2] + a[2][5];
	routes.push_back(r);

	r.route = "1 3 4 2 5";
	r.dist  = a[1][3] + a[3][4] + a[4][2] + a[2][5];
	routes.push_back(r);

	qsort(routes.data(), routes.size(), sizeof(path), compare);

	printf("%d\n%s\n", routes[0].dist, routes[0].route);

	return 0;
}
