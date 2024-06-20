#include <stdio.h>
#include <string.h>
int main(){
char word[1000];
char reverseword[1000];
printf("Enter the word:");
scanf("%[^\n]",word);
for(int p=0;p<strlen(word);p++)
{
    int index=strlen(word)-1-p;
    reverseword[index]=word[p];
}
printf("%s\n",word);
printf("%s\n",reverseword);
if(strcmp(word,reverseword)==0)
{
    printf("Palindrome");
}else
{
    printf("not a palindrome");
}
  return 0;
    
}
