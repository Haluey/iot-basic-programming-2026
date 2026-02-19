#include <stdio.h>

void change(int x) {
	x = 100;
}

int main(void) {
	int a = 10;

	change(a);

	printf("%d\n", a);

	return 0;
}