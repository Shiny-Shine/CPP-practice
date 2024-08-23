//매크로(p160_macro3)
#include<stdio.h>
#define SQUARE(x) ((x)*(x))
#define PR(x) printf("x is %d.\n", x)

int main(void){
	int y = 4;
	
	PR(SQUARE(y+2));		//SQUARE(y+2 * y+2)
	PR(100/SQUARE(2));		//100/2*2
	PR(SQUARE(++y));		//즘감 연산자 자제 
}
