#include<stdio.h>

int main_fathm_fc(void){
	// feet 英尺
	// fathom 海洋测量中的 深度单位 1英寻=2码=6英尺=72英寸=1浔 1英寻=1.8288米 标准说法叫浔
	int feet, fathoms;
	fathoms = 2;
	feet = fathoms * 6;
	printf("there are %d feet in %d fathoms.\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);

	getchar();

	return 0;
}