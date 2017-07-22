#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <iostream>

int main() {
	int n, i, j, c;
	std::vector<std::string> s, h, g, r;
	std::string line;
	char f[32];

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		std::getline(std::cin, line);
		scanf("%s\n", f);

		if (!strcmp(f, "Slytherin" )) s.push_back(line);
		if (!strcmp(f, "Hufflepuff")) h.push_back(line);
		if (!strcmp(f, "Gryffindor")) g.push_back(line);
		if (!strcmp(f, "Ravenclaw" )) r.push_back(line);
	}

	printf("Slytherin:\n");
	for (i = 0; i < s.size(); i++) printf("%s\n", s[i].c_str());

	printf("\nHufflepuff:\n");
	for (i = 0; i < h.size(); i++) printf("%s\n", h[i].c_str());

	printf("\nGryffindor:\n");
	for (i = 0; i < g.size(); i++) printf("%s\n", g[i].c_str());

	printf("\nRavenclaw:\n");
	for (i = 0; i < r.size(); i++) printf("%s\n", r[i].c_str());

	return 0;
}
