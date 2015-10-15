//#define _CRT_SECURE_NO_DEPRECATE
//#param warning(disable:4996)

#include<stdio.h>



int main_rhodium(void){
	float weight;
	float value;

	printf("Are you worth your weight in rhodium.\n");
	printf("Let's check it out.\n");
	printf("Please input your weight in pounds:\n");
	scanf("%f", &weight);

	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f\n", value);
	printf("You are easily worth that! If rhodium prices drop.\n");
	printf("Eat more to maintain your value.");

	getchar();
	getchar();
	getchar();	// ???输入a需要三个getchar();

	return 0;

}