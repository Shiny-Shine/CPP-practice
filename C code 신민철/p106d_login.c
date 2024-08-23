//로그인창 만들기(p106d_login) 
#include<stdio.h>
main(){
	char ch;
	
	printf("ID : "); //아이디 입력
	ch=getche();     //첫 문자 입력
	while(ch !=13)   //Enter키를 누르면 입력 종료
		ch=getche(); //둘째 문자 이후
	putchar('\n');
	
	printf("PASSWARD : "); //비번 입력
	ch=getch();
	putchar('*');
	while(ch !=13){			//첫글자를 *로 출력했으니 반복분에도 똑같이 *로 출력 
		ch=getch();
		putchar('*');
	}	 
	 
}
