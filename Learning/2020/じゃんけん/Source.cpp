#include <stdio.h>
#include <stdlib.h>//���������ɕK�v
#include <time.h>//���������ɕK�v

int main() {
	int key = 0;//���̏o����
	int com = 0;//�R���s���[�^���o����

	srand((unsigned)time(NULL));//�����̃��Z�b�g

	printf("����񂯂�\n");
	printf("�����o���܂����H0�E�O�[�@1�E�`���L�@2�E�p�[\n");
	printf("�ԍ������Ă������� > ");

	scanf_s("%d", &key);

	com = (rand() % 3);//����

	//key��0�ȏォ��key��2�ȉ��̏�������
	if (key >= 0 && key <= 2) {
		printf("\n");
		printf("���̎� : ");
		//key�̒l�ɂ���������
		switch (key) {
		case 0:
			printf("�O�[");
			break;
		case 1:
			printf("�`���L");
			break;
		case 2:
			printf("�p�[");
			break;
		default:
			break;
		}
		printf("�E");
		printf("com�̎� : ");
		//com�̒l�ɂ���������
		switch (com) {
		case 0:
			printf("�O�[");
			break;
		case 1:
			printf("�`���L");
			break;
		case 2:
			printf("�p�[");
			break;
		default:
			break;
		}
		printf("�E");
		printf("���� : ");
		if (key == com) {
			printf("������");
		}
		else if (key == 0 && com == 2) {
			printf("com�̏���");
		}
		else if (key == 1 && com == 0) {
			printf("com�̏���");
		}
		else if (key == 2 && com == 1) {
			printf("com�̏���");
		}
		else {
			printf("���̏���");
		}
	}
	else {
		printf("\n");
		printf("0��1��2��I��łˁI");
	}
	printf("\n\n");

	return 0;
}