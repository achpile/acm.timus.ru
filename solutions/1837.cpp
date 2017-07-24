#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <algorithm>

struct person {
	std::string name;
	int num;
};

struct edge {
	int a;
	int b;
};

struct sortert {
	bool operator()(person a, person b) const {
		return a.name < b.name;
	}
} sorter;

std::vector<person> list;
std::vector<edge>   edges;

void add(const char *name) {
	person t;
	int    i;

	t.name = name;
	t.num = -1;

	if (!strcmp(name, "Isenbaev")) t.num = 0;

	for (i = 0; i < list.size(); i++)
		if (!strcmp(name, list[i].name.c_str()))
			return;

	list.push_back(t);
}

void addE(const char *c1, const char *c2) {
	edge t;
	int  i;

	for (i = 0; i < list.size(); i++)
		if (!strcmp(c1, list[i].name.c_str())) {
			t.a = i;
			break;
		}

	for (i = 0; i < list.size(); i++)
		if (!strcmp(c2, list[i].name.c_str())) {
			t.b = i;
			break;
		}

	edges.push_back(t);
}

int main() {
	char a[64], b[64], c[64];
	int i, n, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s %s %s\n", a, b, c);

		add(a);
		add(b);
		add(c);

		addE(a, b);
		addE(b, c);
		addE(c, a);
	}

	for (i = 0; i < list.size(); i++)
		for (j = 0; j < edges.size(); j++) {
			if (list[edges[j].a].num == i && list[edges[j].b].num == -1)
				list[edges[j].b].num = i + 1;
			else if (list[edges[j].b].num == i && list[edges[j].a].num == -1)
				list[edges[j].a].num = i + 1;
		}

	std::sort(list.begin(), list.end(), sorter);

	for (i = 0; i < list.size(); i++)
		if (list[i].num == -1) printf("%s undefined\n", list[i].name.c_str());
		else                   printf("%s %d\n", list[i].name.c_str(), list[i].num);

	return 0;
}
