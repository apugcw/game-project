#include<stdio.h>

int main() {

	int a = 3;
	double b = 2.5;
	double c = 0.0;

	//a��int�^����double�^�Ɉꎞ�I�ɕϊ�
	//�^��������Ă��Ȃ��Ɗ�{�I�ɂ͉��Z�ł��Ȃ�
	c = (double)a + b;

	printf("%d+%.2f=%.2f",a,b,c);
	
	//��{�I�ȕϐ��̌^
	//int=�����@double=�����@float=���R���@char=����
}