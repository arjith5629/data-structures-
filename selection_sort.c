#include <stdio.h>  

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


void selection(int a[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)     
    {  
        small = i; 
          
        for (j = i+1; j < n; j++)  
        {
            if (a[j] < a[small]) 
            {
            small = j;  
            }
        }
       
        int temp = a[small];  
        a[small] = a[i];  
        a[i] = temp;        
        
    printf("\n%d PASS ---> \t",i+1);
    print(a,n);
    } 
}
    
  
int main()  
{  
    int n;
    do
    {
    printf("\nENTER THE ARRAY LENGTH :");
    scanf("\t%d",&n);
    int *a=read_num(n);
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
    }while(n==0);
    return 0;  
}    