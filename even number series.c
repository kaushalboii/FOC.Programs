#include<stdio.h>
int main()
{
  	int i = 2, n;
  	printf("\n enter the numbers : ");
  	scanf("%d", &n);
  	printf("\n Even Numbers from 2 to %d are : \n", n);
  	while(i <= n) 
  	{
		printf(" %d\n", i);
		i = i+2;                      
  	}
  	return 0;
}
