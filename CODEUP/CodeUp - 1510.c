//CodeUp - 1510 È¦¼ö ¸¶¹æÁø
#include<stdio.h>

int main(void){
	int n, i=0, j=0, c = 0;
	int arr[50][50];
	
	scanf("%d", &n);
	
	j = n/2;
	do{
		
		c++;
		arr[i][j] = c;
		
		if(n == 1){
			arr[0][0] = c;
			break;
		}
		
		if(i == 0 && c%n != 0 && j != n-1){
			i =  n-1;
			j++;
		}
		
		else if(c%n == 0){
			i++;
		}
		
		else if(i == 0 && j == n-1){
			i = n-1;
			j = 0;
		}
		
		else if(j == n-1){
			j = 0;
			i--;
		}
		
		else{
			i--;
			j++;
		}
	}while(c < n*n);
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
