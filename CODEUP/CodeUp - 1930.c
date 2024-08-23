//CodeUp - 1930 SuperSum
#include<stdio.h>

int main(void){
	int n, k;
	while (scanf("%d %d", &k, &n) != EOF){
		printf("%d\n", SuperSum(k, n));
	}
	return 0;
}

int SuperSum(int k, int n){
	int i, sum = 0;
	if(k == 0){
		return n;
	}
	else{
		while (n != 0){
			sum += SuperSum(k-1, n);
			n--;
		}
		return sum;
	}
}
