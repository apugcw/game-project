#include <stdio.h> 

#define MONTHS 12 //MONTHS��12�ɒu��������

int main() 
{
	// MONTHS�̗v�f�����z��day
	int day[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 

	int input;
	
	printf("�����͉����ł���? >"); 

	scanf_s("%d", &input); 

	if (input >= 1 && input <= 12) {
		printf("������ %d���܂łł���\n", day[input - 1]);
	}
	else {
		printf("����͒m��Ȃ����ł�\n");
	}

	return 0; 
}