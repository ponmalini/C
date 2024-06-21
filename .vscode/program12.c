#include <stdio.h>
#include <string.h>
int main()
{
 char s1[5],s2[5];
 printf("Enter the first string:");
 scanf("%s",s1);
 printf("Enter the second string:");
 scanf("%s",s2);
 strcat(s1,s2);
 {
 printf("after concatation:%s",s1);
 }
 return 0;
 }