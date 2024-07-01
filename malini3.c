// Online C compiler to run C program online
#include <stdio.h>
#define MAX_SIZE 50

int main() 
{
    int arr[MAX_SIZE];
    int i,max,min,size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=1;i<size;i++)
    {
     if(arr[i]>max)
     {
         max=arr[i];
     }
     if(arr[i]<min)
     {
         min=arr[i];
     }
   }
    
    printf("maximum element=%d\n",max);
    printf("minimum element=%d",min);
    return 0;
}