#include<stdio.h>
int queue[20],rear=-1,front=-1,x,cha,n;
void enqueue();
void dequeue();
void peek();
void show();

void enqueue()
{
	if (rear == n-1)
	{
		printf("queue IS OVERFLOWWWWWW.\n");
	}
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        printf("ENTER THE VALUE TO BE INSERTED IN queue :\t");
	    scanf("%d",&x);
        queue[rear]=x;
    }
	else
	{
	printf("ENTER THE VALUE TO BE INSERTED IN queue :\t");
	scanf("%d",&x);
	rear++;
	queue[rear]=x;
	}
   
}


void dequeue()
{
	
    if(rear==-1 && front==-1)
    { 
		printf("queue IS UNERFLOWWWWWW.\n");
    }

    else if (rear == front)
	{
		front = rear = -1;
	}
	else
	{
	printf("THE DEQUEUED VALUE FROM queue IS %d \t",queue[front]);
	front++;
	}
   
}

void show()
{
	 if(rear==-1 && front==-1)
    { 
		printf("queue IS UNERFLOWWWWWW NO ELEMENTS IN QUEUE.\n");
    }

	else
	{

	printf("THE VALUES FROM queue ARE : \t");
		for (int i = front; i <= rear; ++i)
		{
			printf("%d\t",queue[i] );
		}
	}
   
}

void peek()
{
    if(rear==-1 && front==-1)
    { 
		printf("queue IS UNERFLOWWWWWW NO ELEMENTS IN QUEUE.\n");
    }

	else
	{
	printf("THE PEEK VALUE FROM queue IS %d .\n",queue[front]);
	}
   
}



int main()
{
    printf("ENTER THE MAX NUMBER OF QUEUE:\t");
	scanf("%d",&n);

    do
    {
   	printf("\n\n\nENTER :\n 1.enqueue into queue\n 2.dequeue FROM queue\n 3.DISPLAY THE queue\n 4.PEEK FROM QUEUE :   \t");
   	scanf("%d",&cha);

   	switch(cha)
   	{
       case 1:
       enqueue();
       break;

       case 2:
       dequeue();
       break;

       case 3:
       show();
       break;

       case 4:
       peek();
       break;

       default:
       break;
   	}

    } while (cha<=4);

	return 0;
}