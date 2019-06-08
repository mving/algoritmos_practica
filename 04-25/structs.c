#include <stdio.h>

struct intervalo {
	char c;
	int x0, x1;
};

int main() {
	printf("%zd\n", sizeof(struct intervalo));

	return 0;
}
