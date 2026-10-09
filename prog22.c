#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b&&b>c){
  printf("a is greatest among 3 integers");
} else if(b>a&&b>c){
 printf("b is greatest among 3 integers");
} else{
 printf("c is greatest among 3 integers");
 }
 return 0;
 }
