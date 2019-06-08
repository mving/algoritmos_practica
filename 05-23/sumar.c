#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	if(argc == 1) {
		fprintf(stderr, "Mal llamado\n");
		return 1;
	}

	double acum = 0;
	for(size_t i = 1; i < argc; i++) {
		/*char *p;
		double res = strtod(argv[i], &p);
		if(strlen(argv[i]) == 0 || *p != '\0') {
			fprintf(stderr, "%s no es un numero\n", argv[i]);
			return 1;
		}
		acum += res;*/
		acum += atoi(argv[i]);
	}

	printf("%f\n", acum);

	return 0;
}

