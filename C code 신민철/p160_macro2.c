//∏≈≈©∑Œ (p160_macro2.c); 
#include<stdio.h>
#define SQUARE(a) a*a
#define PR(x) printf("x is %d.\n", x);
int main(void){
	int x = 4;
	int y;
	
	y = SQUARE(x);
	PR(y);
	y = SQUARE(2);
	PR(y);
	PR(SQUARE(x));
}
