#include<stdio.h>

int main_fathm_fc(void){
	// feet Ӣ��
	// fathom ��������е� ��ȵ�λ 1ӢѰ=2��=6Ӣ��=72Ӣ��=1� 1ӢѰ=1.8288�� ��׼˵�����
	int feet, fathoms;
	fathoms = 2;
	feet = fathoms * 6;
	printf("there are %d feet in %d fathoms.\n", feet, fathoms);
	printf("Yes, I said %d feet!\n", 6 * fathoms);

	getchar();

	return 0;
}