#include<stdio.h>

int main_print1(void){
	int ten = 10;
	int two = 2;

	printf("Do it right:\n");
	printf("%d minus %d is %d\n", ten, two, ten - two);
	printf("Do it wrong:\n");
	printf("%d minus %d is %d", ten);	// 少了两个参数

	getchar();

	return 0;
}