#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>

struct tree {
	char name[16];
	std::vector<tree> cont;

	tree() {};
	tree(char *_name, char *sub) {
		strcpy(name, _name);
		if (sub) add(sub);
	}

	void sort() {
		std::sort(cont.begin(), cont.end(), [](const tree a, const tree b){return strcmp(a.name, b.name) < 0;});
		for (unsigned int i = 0; i < cont.size(); cont[i++].sort());
	}

	void add(char *path);
	void dump(int level);
};


void tree::dump(int level) {
	for (unsigned int i = 0; i < cont.size(); i++) {
		printf("%s%s\n", std::string(level, ' ').c_str(), cont[i].name);
		cont[i].dump(level + 1);
	}
}


void tree::add(char *path) {
	if (!path) return;

	char *dir;
	char *sub;
	bool  f = false;

	dir = path;
	sub = strchr(path, '\\');

	if (sub) {
		*sub = 0;
		sub++;
	}

	for (unsigned int i = 0; i < cont.size(); i++)
		if (!strcmp(cont[i].name, dir)) {
			cont[i].add(sub);
			f = true;
			break;
		}

	if (!f) cont.push_back(tree(dir, sub));
}

tree root;

int main() {
	int n;
	char dir[100];

	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s\n", dir);
		root.add(dir);
	}

	root.sort();
	root.dump(0);

	return 0;
}
