// 별찍기 예제
/*
*	*****
*	*****
* 	*****
*	*****
*	*****
* 
* 	*  
* 	**
* 	***
* 	****
* 	*****
* 
*		*
* 	   **
*	  ***
*    ****
*   *****
* 
*	    *
*      ***
*     *****
*    *******
*   *********
*	
*	*   *
*	 * *
*	  *
*    * *
*   *   *
*/
#include <stdio.h>

int main() {
	int i, j, k;

	// 5X5 * 찍기
	for (i = 1; i <= 5; i++) {
		// 반복문의 조건만 조절하면 대부분 답이 나옴
		for (j = 1; j <= 5; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// 삼각형 찍기
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// 역삼각형 찍기
	for (i = 1; i <= 5; i++) {
		// k <= 5 - i 핵심!
		for (k = 1; k <= 5 - i; k++) {
			printf(" ");
		}

		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");
	
	//피라미드 찍기
	for (i = 1; i <= 5; i++) {

		for (k = 1; k <= 5 - i; k++) {
			printf(" ");
		}

		for (j = 1; j <= i*2-1; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	// X 찍기
	for (i = 1; i <= 5; i++) {

		for (j = 1; j <= 5; j++) {
			if (i == j) {
				printf("*");
			}
			else if (i + j == 6) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}

	return 0;
}