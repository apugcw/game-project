#include<stdio.h>

int main()
{
	int a;
	int b;
	int anc;

	//����
	printf("a=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);

	//�����Z
	anc = a + b;
	printf("%d+%d=%d\n", a, b, anc);
	//�����Z
	anc = a - b;
	printf("%d-%d=%d\n", a, b, anc);
	//�|���Z
	anc = a * b;
	printf("%d*%d=%d\n", a, b, anc);
	//����Z
	anc = a / b;
	printf("%d/%d=%d\n", a, b, anc);
	//���܂�
	anc = a % b;
	printf("%d%%%d=%d\n", a, b, anc);

	return 0;
}