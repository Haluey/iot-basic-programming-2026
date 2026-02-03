#include <stdio.h>

int main(void) {
	int seats = 0; // 자리초기화
	int audience = 0; // 관객수 초기화
	double rate = 0.0; //입장률초기화

	seats = 70;
	audience = 65;

	rate = (double)audience / seats * 100;

	printf("입장률 : %.1f%c\n", rate, (char)37); // 아스키코드말고 %%사용

	return 0;
}