#include <stdio.h>

int main(void) {
	int a = 10, b = 20;
	int* p = &a;
	int** pp = &p;

	*pp = &b;
	**pp = 30;

	printf("%d %d\n", a, b);

	return 0;
}