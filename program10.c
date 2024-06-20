#include <stdio.h>
#include <string.h>
int main(){
char line[1000];
int count=0;
printf("Enter the sentence:");
scanf("%[^\n]",line);
printf("%s",line);
for(int i=0;i<strlen(line);i++)
{
    
    if(line[i]==' ')
    {
      count=count+1;
    }
  
}
printf("\nThe total words in the sentence:%d",count+1);    
  return 0;
    
}
