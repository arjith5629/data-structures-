#include<stdio.h>
int n,i,val,end,beg,temp;
int b[100];

int *read_num()
{
    
     for(int i=0;i<n;i++)
    {
     scanf("\t%d",&b[i]);
    } 
    return b;

}

void sort_array(int a[],int n)
{
   for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    } 
}


void print(int a[],int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
     printf("\t%d",a[i]);
    } 
}

int binary_search(int a[],int beg,int end,int val)
{
 int mid;
  if(end>=beg)
  {
   mid=(beg+end)/2;
   if(a[mid]==val)
   {
    int h=mid;
     printf("\nTHE ELEMENT %d IS FOUND IN THE ARRAY AT POSITION -----> \t",val );
     printf("%d\t",mid+1);
     mid++;
    do
    {
     
     if(a[mid]==val)
     {
      printf("%d\t",mid+1);
     }
     mid++;
    }while(a[mid]==val);
    

     mid=h-1;
     do
    {
     if(a[mid]==val)
     {
       printf("%d\t",mid+1);
     }
      mid--;
    }while(a[mid]==val);

   }
   else if(a[mid]<val)
   {
    return binary_search(a,mid+1,end,val);
   }
   else
   {
    return binary_search(a,beg,mid-1,val);
   }

  }

 else
    {
     printf("\nPRINT THE ELEMENT IS NOT IN THE ARRAY ");
    }

}


int main()
{

    printf("\nENTER THE ARRAY LENGTH :");
    scanf("\t%d",&n);
    int *a=read_num();
    printf("\nTHE UNSORTED ARRAY IS : \n");
    print(a,n);
    sort_array(a,n);
    print(a,n);

   do
   {

    printf("\nENTER THE VALUE TO BE SEARCHED :\t");
	scanf("%d",&val);
    binary_search(a,0,n-1,val);
   }while(val!=0);
	return 0;
}

