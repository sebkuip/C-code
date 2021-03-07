#include <stdio.h>

void main() {
	int i = 5;
	int* pointer_to_i = &i;
	printf("%d\n", i);
	printf("%d\n", *pointer_to_i);
}
