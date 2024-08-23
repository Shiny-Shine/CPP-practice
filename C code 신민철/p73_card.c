//자료 입출력(p73_card)
#include<stdio.h>
main() {
	char name[21];
	int age;
	char code;
	double secure;
	
	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("나이를 입력하세요 : "); 
	scanf("%d", &age);
	fflush(stdin);
	printf("부서 코드를 입력하세요 : ");
	scanf("%s", &code);
	printf("보안키를 입력하세요 : "); 
	scanf("%d", &secure);
	
	printf("***************************\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("부서코드 : %c\n", code);
	printf("보안키 : %d\n");
	printf("*************************\n");
	 
} 
