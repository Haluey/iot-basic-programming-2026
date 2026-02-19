#include <stdio.h>

void change(int* p) {
	*p = 50;
}

int main(void) {
	int a = 10;
	
	change(&a);

	printf("%d\n", a);

	return 0;
}