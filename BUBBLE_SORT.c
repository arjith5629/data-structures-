#include<stdio.h>
int n,i,temp,count=0;
int b[100];

int *read_num(int n)
{
    
     for(int i=0;i<n;i++)
    {
     scanf("\t%d",&b[i]);
    } 
    return b;

}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
     printf("\t%d",a[i]);
    } 
}

void sort_array(int a[],int n)
{
   for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                count++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("\n%d PASS ---> \t",i+1);
        print(a,n);
    } 
    printf("\nNUMBER OF SWAPPING IS ----> %d",count);
    
}



int main()
{

    do
    {
    
    printf("\nENTER THE ARRAY LENGTH :");
    scanf("\t%d",&n);
    int *a=read_num(n);
    printf("\nTHE UNSORTED ARRAY IS : \n");
    print(a,n);
    sort_array(a,n);
    printf("\n\nTHE SORTED ARRAY USING BUBBLE SORT IS : \n");
    print(a,n);
    }while(n==0);


	return 0;
}

