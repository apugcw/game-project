#include<stdio.h>

//�����v�Z
int main() {
	//double�^�ϐ��̍쐬�Ƒ��
	double a;
	double b;
	double c;

	a = 5.0;
	b = 2.5;

	c = a + b;//�����Z

	printf("a+b=%.2f\n", c);

	c = a - b;//�����Z

	printf("a-b=%.2f\n", c);

	c = a * b;//�|���Z

	printf("a*b=%.2f\n", c);

	c = a / b;//����Z

	printf("a/b=%.2f\n", c);

	return 0;

}