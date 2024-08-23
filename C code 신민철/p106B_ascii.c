//ASCII code 출력(p106B_ascii)
#include<stdio.h>
main(){
	char ch;
	
	printf("문자 => ");
	ch=getchar();
	while (ch != EOF){
		getchar();
		printf("%c의 ASCII code : %d\n", ch, ch);
		printf("문자 => ");
		ch=getchar();
	} 
}
