#include<stdio.h>
void main()
{
 int e;
 printf("please enter the number:");
 scanf("%d",&e);
 int remainder=e%2;
 if(remainder==0)
{
 printf("the given num is even");
}

else{
  printf("the given num is odd");

}

}