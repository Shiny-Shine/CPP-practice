//��µ� ���� �ݺ�������(p132_2array6)
#include<stdio.h>
#define NO 20	//NO�� 10���� ����
#define SUB 5	//����� 
main(){
	int n, i, s[NO][SUB];	//[��-�л���][��-�����]
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(i=0; i<SUB; i++)
			s[n][i]=50+rand()%51;
	
	printf("��ȣ	����	����	����	��ȸ	����\n");
	for(n=0; n<NO; n++){
		if(n%5==0)
		printf("-------------------------------------------\n");
		printf("%2d", n+1);
		for(i=0; i<SUB; i++)
			printf("	%3d", s[n][i]);
			putchar('\n');
		
		}
		
			 
} 
