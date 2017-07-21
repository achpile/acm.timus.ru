#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <string>

int main() {
	int n, i, j, k, f1, f2;
	std::vector<std::string> list;
	std::vector<std::string> spam;
	char c[128];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", c);
		f1 = 0;
		f2 = 0;

		for (j = 0; j < list.size(); j++) {
			if (!strcmp(c, list[j].c_str())) {
				f2 = 1;

				for (k = 0; k < spam.size(); k++) {
					if (!strcmp(c, spam[k].c_str())) {
						f1 = 1;
						break;
					}
				}

				if (!f1) spam.push_back(c);
			}
		}

		if (!f2) list.push_back(c);
	}

	for (i = 0; i < spam.size(); i++)
		printf("%s\n", spam[i].c_str());

	return 0;
}
