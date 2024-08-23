//(p109b_odd)
#include<stdio.h>
main()
{
	int i,max,tamp;
	
	srand(time(NULL));
	
	max = 1+rand()%100;
		printf("%2d => %d\n", 1, max);
	
	for(i=1; i<=19; i++)
	{
		tamp = 1+rand()%100;
	if(tamp>max)
		max=tamp;
	printf("%2d => %d\n", i, tamp);
	}
	printf("--------------------------------\n");
	printf("Á© Å« °ª = %d\n", max);
}
