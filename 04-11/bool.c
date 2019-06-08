#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("%zd\n", sizeof(bool));
    printf("%d %d\n", true, false);

    bool x = 3.15; // MAL ORRIBLE
    printf("%d\n", x);

	return 0;
}

