//ASCII code ���(p106B_ascii)
#include<stdio.h>
main(){
	char ch;
	
	printf("���� => ");
	ch=getchar();
	while (ch != EOF){
		getchar();
		printf("%c�� ASCII code : %d\n", ch, ch);
		printf("���� => ");
		ch=getchar();
	} 
}
