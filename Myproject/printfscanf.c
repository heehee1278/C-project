#include <stdio.h>
int main(void)
{	/*
	// ������ ������ ���� ����
 	int age = 12; //int = ���� age = ����
	printf("%d\n", age); //%d = ������ ���� ���
	age = 13; //ù int ���� �� int ���� age = ��
	printf("%d\n", age); 

	// �Ǽ��� ������ ���� ����
	float f = 46.5f;
	printf("%.2f\n", f); // %.nf t�Ҽ��� n�ڸ����� ǥ��
	double d = 4.428; // %lf
	// printf("%lf\n", d);
	printf("%.2f\n", d);

	// ���
	const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);
	// YEAR = 2001;
	

	// printf
	// ����
	int add = 3 + 7; //10
	// printf("3 + 7 = %d\n", add);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("$d", &input);
	printf("�Է°� : %d\n", input);*/

	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);

	return 0;
}