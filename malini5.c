// Online C compiler to run C program online
#include <stdio.h>

void print(int *a,int n) {
    
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main (){
    int a[10],b[20],c[30];
    int n1,n2;
    printf("enter the size of first array:\n");
    scanf("%d",&n1);
    printf("enter the elements of first array:\n");
    for (int i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of second array:");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++){
        scanf("%d",&b[i]);
    } 
     for (int i=0;i<n1+n2;i++){
         if (i<n1){
             c[i]=a[i];
    }else {
        c[i]=b[i-n1];
    }
    }
     printf(" 1st array:");
     print(a,n1);
     printf("\n 2nd array:");
     print(b,n2);
     printf("\n Merged array: ");
     print(c, n1 + n2);
     return 0;
    
    
    
}