//3������ 2���� �迭�� ����(p132_2array3)
#include<stdio.h>
#define NO 10	//NO�� 10���� ����
main(){
	int n, s[NO][3];	//[��-�л���][��-�����]
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		s[n][0]=50+rand()%51;	//���α׷��� ����
	for(n=0; n<NO; n++)
		s[n][1]=50+rand()%51;	//���� ����
	for(n=0; n<NO; n++)
		s[n][2]=50+rand()%51;	//ó�� ���� 
		
	printf("��ȣ	����	���� 	ó��\n");
	printf("---------------------------------------\n");
	for(n=0; n<NO; n++)
		printf("%2d	%3d	%3d	%3d\n", n+1, s[n][0], s[n][1], s[n][2]);
} 
