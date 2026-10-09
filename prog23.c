#include<stdio.h>
int main() {
int marks;
scanf("%d",&marks);
if(marks>=90&&marks<=100)
  printf("Grade A");
  else if(marks<90&&marks>=70)
   printf("Grade B");
  else if(marks<70&&marks>=50)
    printf("Grade C");
  else(marks<50&&marks>=0);
    printf("Grade D");
  return 0;
  }     
