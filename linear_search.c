#include<stdio.h>
int n,i,j,val;

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
     printf("\t%d",a[i]);
    } 
}

int linear_search(int a[],int val,int n)
{
  for(int i=0;i<n;i++)
    {
        if(a[i]==val)
            return i+1;
    } 

    return -1;
}

int main()
{

    int a[]={12,45,67,33,23,14,90,67,98};
    n=sizeof(a)/sizeof(a[0]);
    print(a,n);
   do
   {

    printf("\nENTER THE VALUE TO BE SEARCHED :\t");
	scanf("%d",&val);
    int output=linear_search(a,val,n);
    if(output== -1)
    {
     printf("\nPRINT THE ELEMENT IS NOT IN THE ARRAY ");
    }
    else
    {
         printf("\nTHE ELEMENT %d IS FOUND IN THE ARRAY AT POSITION %d . ",val,output );
    }
   }while(val!=0);

	return 0;
}