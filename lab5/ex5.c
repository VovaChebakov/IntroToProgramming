#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
	Student,
	TA,
	Professor
} role_t;
typedef enum {
	Secondary,
	Bachelor,
	Master,
	PhD
} degree_t;
typedef struct {
	char name[20];
	degree_t degree;
	role_t role;
} moodle_member;

role_t define_role(char *role) {
	if (strcmp(role, "Student") == 0) {
		return Student;
	} else if (strcmp(role, "TA") == 0) {
		return TA;
	} else if (strcmp(role, "Professor") == 0) {
		return Professor;
	}
}

degree_t define_degree(char *degree) {
	if (strcmp(degree, "Secondary") == 0) {
		return Secondary;
	} else if (strcmp(degree, "Bachelor") == 0) {
		return Bachelor;
	} else if (strcmp(degree, "Master") == 0) {
		return Master;
	} else if (strcmp(degree, "PhD") == 0) {
		return PhD;
	}
}

const char* role_string[] = {"Student", "TA", "Professor"};
const char* degree_string[] = {"Secondary", "Bachelor", "Master", "PhD"};

int main(int argc, const char *argv[]) {
	int num;
	moodle_member members[100];

	printf("Enter a number of Moodle members:");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		char role_buff[12], degree_buff[12];

		printf("Enter name of the %d member: ", i+1);
		scanf("%s", members[i].name);
		printf("Enter degree of the %d member: ", i+1);
		scanf("%s", degree_buff);
		printf("Enter role of the %d member: ", i+1);
		scanf("%s", role_buff);

		members[i].role = define_role(role_buff);
		members[i].degree = define_degree(degree_buff);
	}
	for (int i = 0; i < num; i++) {
		for (int j = 1; j < num; j++) {
			int condition = (members[j-1].role < members[j].role) ||
							(members[j-1].role == members[j].role &&
							members[j-1].degree < members[j].degree);
			if (condition) {
				moodle_member temp = members[j - 1];
				members[j-1] = members[j];
				members[j] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		printf("%s\n", members[i].name);
		printf("   %s\n", role_string[members[i].role]);
		printf("   %s\n", degree_string[members[i].degree]);
	}
	return 0;
}