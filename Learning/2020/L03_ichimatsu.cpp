#include<stdio.h>

int main() {
	int i, j;//���[�v�J�E���^

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++) {
			if ((j+i) % 2 == 1) {
				printf("��");
			}
			else {
				printf("��");
			}
		}
		printf("\n");
	}
	return 0;
}