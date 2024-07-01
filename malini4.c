// Online C compiler to run C program online
#include <stdio.h>
#define MAX_SIZE 50

int main() 
{
    int arr[MAX_SIZE];
    int size,i;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n reversed array:");
    for(int i=size-1;i>=0;i--){
        printf("\n%d",arr[i]);
    }
    
        return 0;
}