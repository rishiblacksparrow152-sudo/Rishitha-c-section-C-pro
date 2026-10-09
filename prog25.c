#include<stdio.h>
int main(){
int year;
scanf("%d", &year);
if(year%400||year%100||year%4)
  printf("leap  year");
 else
  printf("not a leap year");
 return 0;
 }
