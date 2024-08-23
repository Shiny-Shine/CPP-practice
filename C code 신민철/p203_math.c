//수학 함수(p203_math.c)
#include<stdio.h>
#include<math.h>

int main(void){
	printf("log(10) = %f\n", log(10));			//상용 로그 
	printf("exp(1) = %f\n", exp(1));			//자연 로그 
	
	printf("pow(5, 2) = %f\n", pow(5, 2));		//지수 
	printf("sqrt(25) = %f\n", sqrt(25));		//제곱근 
	
	printf("ceil(3.14) = %f\n", ceil(3.14));	//x다음 정수 
	printf("floor(3.14) = %f\n", floor(3.14));	//x아래 정수 
	
	printf("abs(-3) = %d\n", abs(-3));			//절대값 
}
