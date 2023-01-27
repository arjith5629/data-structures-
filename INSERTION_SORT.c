#include <stdio.h> 
int n,b[100];

int *read_num()
{
    
     for(int i=0;i<n;i++)
    {
     scanf("\t%d",&b[i]);
    } 
    return b;

}
  
void insert(int a[], int n) 
{  
    int i, j, temp,count=0;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  
        {    
            a[j+1] = a[j];     
            j = j-1;  
            count++;
        }    
        a[j+1] = temp;    
    }  
    printf("\nTHE NUMBER OF SWAPPING REQUIRED IS %d ", count); 
    
}  
  
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    printf("\nENTER THE ARRAY LENGTH :");
    scanf("\t%d",&n);
    int *a=read_num();
    printf("\nTHE UNSORTED ARRAY IS : \n");
    printArray(a,n);
    insert(a, n); 
    printf("\nAfter sorting array elements are - \n");  
    printArray(a, n);  
    return 0;  
}    