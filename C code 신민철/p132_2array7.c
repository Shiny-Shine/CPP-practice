//5������ ���� ��� ���ϱ�(p132_2array7)
#include<stdio.h>
#define NO 10	//NO�� 10���� ����
#define SUB 5	//����� 
main(){
	int n, i, s[NO][SUB], sum[NO];	//[��-�л���][��-�����]
	float avg[NO];
	
	srand(time(NULL));
	for(n=0; n<NO; n++)
		for(i=0; i<SUB; i++)
			s[n][i]=50+rand()%51;
			
	for(n=0; n<NO; n++) {
		sum[n]=0;
		for(i=0; i<SUB; i++)
			sum[n]=sum[n]+s[n][i];	//����
		avg[n]=(float)sum[n]/SUB;	//���  
	}
	
		
	printf("��ȣ	����	����	����	��ȸ	����	����	���\n");
	printf("----------------------------------------------------------------------\n");
	for(n=0; n<NO; n++){
		printf("%2d", n+1);
		for(i=0; i<SUB; i++)
			printf("	%3d", s[n][i]);
		printf("	%3d	%.2f\n", sum[n], avg[n]);
		}
		
			 
} 
