//CodeUp - 2033 사다리 게임
#include<stdio.h>

int main(void){
	int k, n, m[105], a, b, p, i, t;
	
	scanf("%d %d" ,&k, &n);
	
	for(i = 1; i <= k; i++){
        m[i] = i;    
	}
	
	while(n != 0){
	n--;
	scanf("%d%d", &a, &b);
		t = m[a];
		m[a] = m[b];
		m[b] = t;
	}
	
	 scanf("%d", &p);

    for(i = 1; i <= k; i++)
        if(p == m[i])
            printf("%d", i);
            
    return 0;
} 
