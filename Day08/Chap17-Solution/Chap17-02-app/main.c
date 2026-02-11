// 구조체(structure)
//#pragma pack(1)		// 패딩바이트를 사용 안 함. 17bytes만 사용

#include <stdio.h>

struct student {
	char ch1;		// 1
	char ch2;		// 1
	short num;		// 2
	int score;		// 4byte
	double grade;	// 8byte
	char ch3;		// 1
};

int main(void) {

	struct student st1;

	// 이전 실제 사용되는 바이트는 12bytes 이지만, 패딩바이트로 16bytes로 구성
	// student 총 17bytes -> 실제 32bytes 사용
	printf("구조체 student 크기 : %zu\n", sizeof(st1));
	// 구조체에 선언하는 멤버변수의 위치만 조정해도 패딩바이트가 사라짐 -> 24bytes

	return 0;
}