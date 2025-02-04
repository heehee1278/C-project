#include <stdio.h>
int main(void)
{	/*
	// 정수형 변수에 대한 예제
 	int age = 12; //int = 정수 age = 변수
	printf("%d\n", age); //%d = 정수형 값을 출력
	age = 13; //첫 int 선언 후 int 없이 age = 값
	printf("%d\n", age); 

	// 실수형 변수에 대한 예제
	float f = 46.5f;
	printf("%.2f\n", f); // %.nf t소수점 n자리까지 표시
	double d = 4.428; // %lf
	// printf("%lf\n", d);
	printf("%.2f\n", d);

	// 상수
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
	// YEAR = 2001;
	

	// printf
	// 연산
	int add = 3 + 7; //10
	// printf("3 + 7 = %d\n", add);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	// scanf
	// 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("$d", &input);
	printf("입력값 : %d\n", input);*/

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	return 0;
}