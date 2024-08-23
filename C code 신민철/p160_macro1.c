//∏≈≈©∑Œ (p160_macro1.c) 

#include<stdio.h>
#define TWO 2
#define MSG "Teacher Kim has become a old gentleman with grey hair"
#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d,	\n"

int main(void){
	int x = TWO;
	PX;
	x = FOUR;
	printf(FMT, x);
	printf("%s \n", MSG);
	printf("TWO: MSG \n");
}
