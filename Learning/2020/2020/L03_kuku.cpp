#include<stdio.h>

int main() {
	int i, j;//���[�v�J�E���^

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			//�l�̎Q�Ƃł͌v�Z���ʂ��Q�Ƃ��邱�Ƃ��\�ł���
			//%�ld�Ƃ��邱�ƂŒl���̃X�y�[�X���m�ۂ��邱�Ƃ��ł���
			printf("%d*%d=%2d�@", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}