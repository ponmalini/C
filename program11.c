#include <stdio.h>
#include <string.h>
int main(){
char line[1000];
int count=0;
printf("Enter the sentence:");
scanf("%[^\n]",line);
printf("%s",line);
for(int i=0;line[i]!='0';i++)
{
      count=count+1;
  
}
printf("\nThe total words in the sentence:%d",count);    
  return 0;
    
}
