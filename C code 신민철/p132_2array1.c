//2������ �迭�� ����(p132_2array1) 
#include<stdio.h>
#define NO 10	//NO�� 10���� ����
main(){
	int n, program[NO], architecture[NO];
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		program[n]=50+rand()%51;	//���α׷��� ����
	for(n=0; n<NO; n++)
		architecture[n]=50+rand()%51;	//���� ����
	
	printf("��ȣ	����	���� \n");
	printf("---------------\n");
	for(n=0; n<NO; n++)
		printf("%2d	%3d	%3d\n", n+1, program[n], architecture[n]);
}
