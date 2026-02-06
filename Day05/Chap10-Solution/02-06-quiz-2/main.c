// 260206 기초 프로그래밍 언어 - C 퀴즈 2번

#include <stdio.h>

int main(void) {
	int x = 7;

	if (x % 2 == 0) {
		printf("A");
	}
	else if (x > 5) {
		printf("B");
	}
	else {
		printf("C");
	}
	/*
	* x가 7이라 2로 나눈 나머지가 1이기 때문에 첫 번째 조건은 성립하지 않고,
	* x가 5보다 큰 7이기 때문에 조건이 성립해서 B가 출력된다.
	*/

	return 0;
}