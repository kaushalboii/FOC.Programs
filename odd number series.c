#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("Odd Numbers Between 1 to %d : \n",n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d \n",i);
        }
    }
}
