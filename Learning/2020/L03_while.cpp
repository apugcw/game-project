#include<stdio.h>

int main() {
	int a = 1;
	int b = 2;
	int c=0;
	int i=0;//���[�v�J�E���^

	//while�� : while(������){}�@�������̏����𖞂����Ă���Ԓ��g���J��Ԃ�������
	while (c<20)
	{
		c = c + a * b;
		i++;
		printf("c�̒l:%d�@���[�v��:%d\n",c,i);
	}
	return 0;
}
