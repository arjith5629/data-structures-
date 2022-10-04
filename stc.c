#include<stdio.h>
int stack[100],n,i,top=-1,cha,x;
void push();
void pop();
void peek();
void show();

void push()
{
	if (top >= n)
	{
		printf("STACK IS OVERFLOWWWWWW.\n");
	}

	else
	{
	printf("ENTER THE VALUE TO BE INSERTED IN STACK :\t");
	scanf("%d",&x);
	top++;
	stack[top]=x;
	}
   
}


void pop()
{
	if (top <= -1)
	{
		printf("STACK IS UNDERFLOWWWWWW.\n");
	}

	else
	{
	printf("THE VALUE POPED FROM STACK IS %d .\n",stack[top]);
	top--;
	}
   
}

void peek()
{
	if (top <= -1)
	{
		printf("STACK IS UNDERFLOWWWWWW NO ELEMENTS IN STACK.\n");
	}

	else
	{
	printf("THE PEEK VALUE FROM STACK IS %d .\n",stack[top]);
	}
   
}

void show()
{
	if (top <= -1)
	{
    printf("STACK IS UNDERFLOWWWWWW NO ELEMENTS IN STACK.\n");
    }

	else
	{

	printf("THE VALUES FROM STACK ARE : \t");
		for (i = 0; i <= top; ++i)
		{
			printf("%d\t",stack[i] );
		}
	}
   
}

int main()
{


	printf("ENTER THE MAX VALUE OF STACK :\t");
	scanf("%d",&n);

    do
    {
   	printf("\n\n\nENTER :\n 1.PUSH OF STACK\n 2.POP FROM STACK\n 3.PEEK OF STACK\n 4.DISPLAY THE STACK  :   \t");
   	scanf("%d",&cha);

   	switch(cha)
   	{
       case 1:
       push();
       break;

       case 2:
       pop();
       break;

       case 3:
       peek();
       break;

       case 4:
       show();
       break;

       default:
       break;
   	}

    } while (cha<=4);

	return 0;
}