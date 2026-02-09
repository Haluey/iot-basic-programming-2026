// 값 복사해서 전달 & 주소 복사
// 포인터 변수로 리턴

#include <stdio.h>

// void add_ten(int);
int add_ten(int);
void plus_ten(int*);	// 매개변수로 포인터 선언
int* sum(int, int);		// 매개변수는 일반 변수, 리턴은 포인터 변수

int main(void) {
	int a = 100;
	int* result;		// 주소를 받는다

	a = add_ten(a);
	printf("a = %d\n", a);	// 110

	plus_ten(&a);
	printf("a = %d\n", a);	// 120

	result = sum(40, 60);	// 정적 변수 res의 주소를 돌려받음.
	printf("*result = %d\n", *result);

	return 0;
}

// 값 복사 후 리턴 없으면 값이 사라짐.
//void add_ten(int num) {
//	num = num + 10;
//}

int add_ten(int num) {
	num = num + 10;

	return num;
}

void plus_ten(int* pa) {
	*pa = *pa + 10;
}

int* sum(int a, int b) {
	static int res;		// 정적 지역변수. static을 써서 sum함수가 끝나도 살아있도록 하겠다는 의미

	res = a + b;
	return &res;
}