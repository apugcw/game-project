#include<stdio.h>

//�v���g�^�C�v�錾:����̊֐����쐬���邽�߂Ɏ��O�ɂǂ̂悤�Ȋ֐��Ȃ̂����`����
//����:�֐��𗘗p���鎞�ɑ��鏉���l�@�߂�l:�֐��𗘗p���ē����l
//�ǂ�����K���K�v�Ƃ����킯�ł͂Ȃ����A�����͊�{�K�v�ɂȂ�
//�錾���@:�߂�l�̌^�@�֐���(����1,����2...);
void p_hello();//�����Ȃ�,�߂�l�Ȃ�
double my_pow(double value);//����:double�^1��,�߂�l:double�^

int main() {
	double a=5.5;
	double b;

	p_hello();
	
	b = my_pow(a);
	printf("a*a=%lf\n", b);

	return 0;
}

//hello �ƕ\������֐�
void p_hello() {
	printf("hello\n");
}
//�����̓���߂�l�Ƃ���֐�
double my_pow(double value) {
	return value * value;
}