#include <stdio.h>
#define MAXSIZE 10
void main ()
{
    int array[MAXSIZE];
    int i, j, num, temp;
    printf("enter number of elements in an num\n");
    scanf("%d", &num);
    printf("Enter the elements\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    } 
    printf("input array \n");
    for (i = 0; i < num; i++)
    {
        printf("%d",array[i]);
    }    
        for (i=0;i< num;i++)
        {
            for(j=0;j<(num-1-i);j++)
        {
            if (array[j]> array[j+1])
        {
                temp=array[j];
                array[i] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
}
