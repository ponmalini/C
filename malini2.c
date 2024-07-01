// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int size,i,a[5];
    int sum=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    printf("Enter the elements:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    return 0;
}