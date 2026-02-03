#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int weight = 0;
	double height = 0.0, bmi = 0.0;

	printf("몸무게(kg)과 키(cm) 입력 : ");
	scanf("%d %lf", &weight, &height);

	bmi = weight / ((height / 100) * (height / 100));

	printf("%s\n", bmi >= 20 && bmi < 25 ? "표준입니다." : "체중관리가 필요합니다.");
}