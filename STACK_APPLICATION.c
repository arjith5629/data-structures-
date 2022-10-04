#include<stdio.h>
int STUDENT[100],n,i,top=-1,cha,x;
void push();
void show_first_ten_students();

void push()
{
	if (top >= n)
	{
		printf("STUDENT IS OVERFLOWWWWWW.\n");
	}

	else
	{
	printf("ENTER THE REG NUMBER OF STUDENT :\t");
	scanf("%d",&x);
	top++;
	STUDENT[top]=x;
	}
   
}


void show_first_ten_students()
{
	if (top <= -1)
	{
    printf(" NO STUDENT SUBMITTED ASSIGNMENTS.\n");
    }

	else
	{
	printf("THE FIRST TEN STUDENTS ARE : \t");
		for (i = 0; i <=9 ; ++i)
		{
			printf("\nREG NO : %d\t",STUDENT[i] );
		}
	}
   
}

int main()
{


	printf("ENTER THE MAX NUMBER OF STUDENT IN A CLASS:\t");
	scanf("%d",&n);

    do
    {
   	printf("\n\n\nENTER :\n 1.REG NO OF STUDENT SUBMITTED DA's. \n 2.DISPLAY THE FIRST TEN STUDENTS WHO SUBMITTED DA's.\n\t\t\t\t\t :   \t");
   	scanf("%d",&cha);

   	switch(cha)
   	{
       case 1:
       push();
       break;

       case 2:
       show_first_ten_students();
       break;

       default:
       break;
   	}

    } while (cha<=2);

	return 0;
}