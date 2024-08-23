//CodeUp - 1807 우박수 길이 (3n+1)(small)
#include<stdio.h>

int main(void){
	int n, n2, i ,j, c=0, max=0, len=0;
	
	scanf("%d %d" ,&n, &n2);
	
	for(i=n; i<=n2; i++){
		j = i;
		c = 1;
		while(j != 1){
			

			
			if(j%2 == 1){
				j = (j*3)+1;
			}
			else	j = j/2;
			
			c++;
		}
		if(c > len){
			len = c;
			max = i;
		}
	}
	printf("%d %d", max, len);
	
	return 0;
} 
