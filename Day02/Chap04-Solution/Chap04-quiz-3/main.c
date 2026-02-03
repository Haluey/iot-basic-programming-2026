#include <stdio.h>

int main(void) {
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;

	min = (int)((time - hour) * 60);

	sec = (int)(((time - hour) * 60 - min) * 60);

	printf("3.76시간은 %d시간 %d분 %d초입니다\n", hour, min, sec);
}