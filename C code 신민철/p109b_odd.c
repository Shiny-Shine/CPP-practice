//(p109b_odd)
#include<stdio.h>
main()
{
	int i,max,tamp;
	
	srand(time(NULL));
	
	max = 1+rand()%100;
		printf("temp = %d\n", max);
	
	for(i=1; i<=19; i++)
	{
		tamp = 1+rand()%100;
	if(tamp>max)
		max=tamp;
	printf("tamp = %d\n", tamp);
	}
	printf("--------------------------------\n");
	printf("max = %d\n", max);
}
