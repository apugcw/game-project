#include<stdio.h>

int main() {
	int a = 9;
	int i,j;//���[�v�J�E���^

	printf("���œ������ꌅ�̂��̂̂ݕ\������\n");
	for (i = 1; i <= a; i++) {
		for (j = 1; j <= a; j++) {
			if (i * j > 10) {
				continue;
			}
			printf("%d*%d=%d�@", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}