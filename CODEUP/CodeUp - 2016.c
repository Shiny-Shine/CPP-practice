//CodeUp - 2016 천단위 구분기호
#include <stdio.h>

#define SIZE 300

char stack[SIZE];
int array[SIZE];
char arrayChar[SIZE];
int top;

void initStack()
{
	top = -1;
}

int push(char num)
{
	if (top == SIZE-1){
		printf("stack overflow\n");
	}
	else{
		stack[top+1] = num;
		top++;
	}
}

void printStack()
{
	int i;
	for(i=0; i<=top; i++)
	{
		printf("%c", stack[i]);
	}
	printf("\n");
}

int main(void)
{
	int inputSize;
	char strNumber[SIZE];
	char *strNumberArray;
	int i = 0;
	
	scanf("%d", &inputSize);
	scanf("%s", strNumber);
	strNumberArray = strNumber;
	
	initStack();
	
	for(i=inputSize-1; i>=0; i--)
	{
		
		if(i == 0)
		{
			push(*strNumberArray);
		}
		else if(i%3 == 0)
		{
			push(*strNumberArray);
			push(',');
		}
		else
		{
			push(*strNumberArray);
		}
		*strNumberArray++;
	}
	printStack();
	
	return 0;
}
