#include<stdio.h>
int main()
{
int n,i=1,sum=0;
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("sum of numbers from 1 to  %d is %d",n,sum);
return 0;
}
