#include<stdio.h>
int n,i,val,temp;
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
 
int getClosest(int, int, int);
 
int findClosest(int arr[], int n, int target)
{
    if (target <= arr[0])
        return arr[0];

    if (target >= arr[n - 1])
        return arr[n - 1];
 
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return arr[mid];
 
        else if (target < arr[mid]) {
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);  
            j = mid;
        }
     
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],arr[mid + 1], target);
            i = mid + 1;
        }
    }
    return arr[mid];
}

int getClosest(int val1, int val2, int target)
{
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
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

    printf("\nENTER THE TARGETS NEAREST NUMBER TO BE SEARCHED :\t");
	scanf("%d",&val);
    int f = findClosest(a, n,val);
    printf("\nTHE NEAREST NUMBER TO THE TARGET IS %d",f);
   }while(val!=0);
	return 0;
}

