#include<stdio.h>
int main(){
int days;
scanf("%d", &days);
switch(days){
case 1:
    printf("Monday");
    break;
case 2:
  printf("tuesday");
  break;
case 3:
   printf("wednesday");
   break;
case 4:
   printf("Thursday");
   break;
case 5:
    printf("Friday");
    break;
case 6:
     printf("Saturday");
     break;
case 7:
      printf("sunday");
      break;
 default:
       printf("not days");
       }
      return 0;
      }
