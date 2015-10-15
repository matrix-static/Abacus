#include<stdio.h>

int main_bases(void){
	int x = 100;
	printf("dec=%d, octal=%o, hex=%x. \n", x, x, x);
	printf("dec=%d, octal=%#o, hex=%#x. \n", x, x, x);
	printf("");

	getchar();

	return 0;
}

// 一般情况：
// long long 是64位
// long		 是32位
// short	 是16位
// int		 是16位或32位(看机器)