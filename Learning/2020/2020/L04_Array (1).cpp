#include<stdio.h>
//#define:�}�W�b�N�i���o�[���g��Ȃ��悤�ɂ��邽�߁A
//�S�̂�ʂ��ė��p���悤�Ȓ萔�͍ŏ��Ɍ��߂�
#define MAX 100
#define NEDAN  50//�z��̍ő�T�C�Y
#define SYOUHIN 50
#define NAME 264

int main() {
	int okashi[SYOUHIN][NEDAN];//�z��
	char name[NAME];
	int b[MAX];//�z��

	int i;//���[�v�J�E���^

	//a[0]�`a[4]���ꂼ��ɒl���i�[
	for (i = 0; i < 5; i++) {
		okashi[i][i] = i * 3;
	}
	i = 0;
	while (i < 5) {//�e�l��\��
		printf("a=%d\n", a[i]);
		i++;
	}

	a[5] = 3;
	b[3] = 10;

	//�z��̏ꏊ���w�肷��̂ɔz����g����
	printf("b[3]=%d\n",b[a[5]]);

	return 0;

}