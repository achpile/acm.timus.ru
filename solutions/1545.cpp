#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <string>

int main() {
	int n, i;
	std::vector<std::string> list;
	char c[128];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", c);
		list.push_back(c);
	}

	scanf("%s", c);

	for (i = 0; i < n; i++)
		if (c[0] == list[i].c_str()[0])
			printf("%s\n", list[i].c_str());

	return 0;
}
