#include <stdio.h>
#include <string.h>
#include <math.h>

struct tree {
	unsigned num;
	tree *l;
	tree *r;
};

void add(tree *node, tree *rt) {
	if (node->num > rt->num) {
		if (rt->r) add(node, rt->r);
		else rt->r = node;
	} else {
		if (rt->l) add(node, rt->l);
		else rt->l = node;
	}
}

void process(tree *rt) {
	if (rt->r) process(rt->r);
	if (rt->l) process(rt->l);
	printf("%u\n", rt->num);
}

int main() {
	unsigned n, t;
	int i;
	tree list[3001];
	tree *root;

	scanf("%u\n", &n);
	for (i = 0; i < n; i++) {
		scanf("%u\n", &t);
		list[i].num = t;
		list[i].l = NULL;
		list[i].r = NULL;
	}

	root = &list[n - 1];
	for (i = n - 2; i >= 0; i--)
		add(&list[i], root);

	process(root);

	return 0;
}
