//���� �ݺ������� ����(p132_2array5)
#include<stdio.h>
#define NO 10	//NO�� 10���� ����
#define SUB 5	//����� 
main(){
	int n, i, s[NO][SUB];	//[��-�л���][��-�����]
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(i=0; i<SUB; i++)
			s[n][i]=50+rand()%51;
	
		
	printf("��ȣ	����	����	����	��ȸ	����\n");
	printf("----------------------------------------------------------------------\n");
	for(n=0; n<NO; n++)
		printf("%2d	%3d	%3d	%3d	%3d	%3d\n", n+1, s[n][0], s[n][1], s[n][2], s[n][3], s[n][4]);
} 
