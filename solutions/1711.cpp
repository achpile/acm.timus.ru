#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>

struct task {
	std::vector<std::string> names;
};

int main() {
	int n, i, k;
	char nm[32];
	std::vector<task> list;
	std::vector<std::string> nms;
	task t;

	scanf("%d\n", &n);
	for (i = 0; i < n; i++) {
		t.names.clear();
		scanf("%s", nm);
		t.names.push_back(std::string(nm));
		scanf("%s", nm);
		t.names.push_back(std::string(nm));
		scanf("%s", nm);
		t.names.push_back(std::string(nm));
		std::sort(t.names.begin(), t.names.end());
		list.push_back(t);
	}

	for (i = 0; i < n; i++) {
		scanf("%d", &k);
		k--;

		if (i == 0) {
			nms.push_back(list[k].names[0]);
		} else {
			     if (nms[nms.size() - 1].compare(list[k].names[0]) < 0) nms.push_back(list[k].names[0]);
			else if (nms[nms.size() - 1].compare(list[k].names[1]) < 0) nms.push_back(list[k].names[1]);
			else if (nms[nms.size() - 1].compare(list[k].names[2]) < 0) nms.push_back(list[k].names[2]);
			else {
				printf("IMPOSSIBLE\n");
				return 0;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%s\n", nms[i].c_str());

	return 0;
}
