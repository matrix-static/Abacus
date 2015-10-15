#include<stdio.h>

void butler(void);

int main_two_func(void){
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes, Bring me some tea and writeable CD-ROMS.\n");

	getchar();

	return 0;
}

void butler(void){
	printf("You rang, Sir?\n");
}