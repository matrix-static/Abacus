#include<stdio.h>

int main_bases(void){
	int x = 100;
	printf("dec=%d, octal=%o, hex=%x. \n", x, x, x);
	printf("dec=%d, octal=%#o, hex=%#x. \n", x, x, x);
	printf("");

	getchar();

	return 0;
}

// һ�������
// long long ��64λ
// long		 ��32λ
// short	 ��16λ
// int		 ��16λ��32λ(������)