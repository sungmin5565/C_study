#include <stdio.h>

void main()
{
	int a, b;
	int result;
	
	printf("ù��° �Ի��� ���� �Է��ϼ��� ==>");
	scanf("%d", &a);

	printf("�ι�° �Ի��� ���� �Է��ϼ��� ==>");
	scanf("%d", &b);
	
	printf("����° �Ի��� ���� �Է��ϼ��� ==>");
	scanf("%d", &b);

	printf("�׹�° ����� ���� �Է��ϼ��� ==>");
	scanf("%d", &b);

	result = a + b;
	printf(" %d + %d = %d \n", a, b, result);

	result = a - b;
	printf(" %d - %d = %d \n", a, b, result);

	result = a * b;
	printf(" %d * %d = %d \n", a, b, result);

	result = a / b;
	printf(" %d / %d = %d \n", a, b, result);
}

