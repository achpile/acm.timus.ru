#include <stdio.h>
#include <string.h>
#include <vector>
#include <string>

struct user {
	std::string login;
	std::string pass;
	int logged;
};

std::vector<user> list;

std::string regist(const char *username, const char *pass) {
	int i;

	for (i = 0; i < list.size(); i++)
		if (!strcmp(username, list[i].login.c_str()))
			return "fail: user already exists";

	user t;
	t.logged = 0;
	t.login  = std::string(username);
	t.pass   = std::string(pass);
	list.push_back(t);

	return "success: new user added";
}

std::string login(const char *username, const char *pass) {
	int i;

	for (i = 0; i < list.size(); i++)
		if (!strcmp(username, list[i].login.c_str())) {
			if (!strcmp(pass, list[i].pass.c_str())) {
				if (list[i].logged) {
					return "fail: already logged in";
				} else {
					list[i].logged = 1;
					return "success: user logged in";
				}
			} else {
				return "fail: incorrect password";
			}
		}

	return "fail: no such user";
}

std::string logout(const char *username) {
	int i;

	for (i = 0; i < list.size(); i++)
		if (!strcmp(username, list[i].login.c_str())) {
			if (list[i].logged) {
				list[i].logged = 0;
				return "success: user logged out";
			} else {
				return "fail: already logged out";
			}
		}

	return "fail: no such user";
}

int main() {
	int n, i;
	char action[32], username[64], pass[64];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", action);

		if (!strcmp(action, "register")) {
			scanf("%s %s", username, pass);
			printf("%s\n", regist(username, pass).c_str());
		} else if (!strcmp(action, "login")) {
			scanf("%s %s", username, pass);
			printf("%s\n", login(username, pass).c_str());
		} else if (!strcmp(action, "logout")) {
			scanf("%s", username);
			printf("%s\n", logout(username).c_str());
		}
	}
}
