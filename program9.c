#include <stdio.h>
int main()
{
    int ponmalini[]={9,3,634,45,456,67,687,45};
    int length = sizeof(ponmalini) / sizeof(ponmalini[0]);
    int greatest=0;
    int secondgreatest=0;
   for(int i=0;i<length;i++)
    {
        if(ponmalini[i]>greatest)
        {
            greatest=ponmalini[i];
        }
    }
     for(int i=0;i<length;i++)
    {
        if(ponmalini[i]>secondgreatest && ponmalini[i]!=greatest)
        {
            secondgreatest=ponmalini[i];
        }
    }
    printf("%d\n",greatest);
    printf("%d\n",secondgreatest);
    return 0;
}