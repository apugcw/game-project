#include <stdio.h>

int main()
{
	//�ϐ��錾
	int a; // int�͐����^ 
	double b; //double�͎����^
	char c;   //char�͕����^

	//���
	a = 1234;      
	b = 567;
	c = 'A'; 

	//�\��
	printf("a = %d%d\n", a,a); //%d �́A���� a �ƒu������� 
	printf("b = %f\n", b); //%f �́A���� b �ƒu������� 
	printf("c = %c\n", c); //%c �́A���� c �ƒu������� 

	return 0;
}