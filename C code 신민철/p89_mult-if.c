//���� if��(p89_mult-if.c) 
#include <stdio.h>
main() {
	int score;
	
	printf("�� ���� =>");
	scanf("%d", &score);
	printf("���� ��� =>");
	if(score>=90)
		printf("^A^");
	else if(score>=80)
		printf("^B^");
	else if(score>=70)
		printf("^C^");
	else if(score>=60)
		printf("^D^");
	else
		printf("^E^"); 
}
