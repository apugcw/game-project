#include<stdio.h>
#include<math.h>//math.h���C���N���[�h���ċ@�\�𑝂₷


int main() {
	double a;
	double b;
	double c;

	a = 5.0;
	b = 3.0;

	c = pow(a, b);//pow(a,b): a^b
	printf("a^b=%lf\n",c );
	//fabs(�v�Z��):|�v�Z��|
	printf("|a-b|=%lf\n", fabs(a - b));

	return 0;
	
}