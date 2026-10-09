#include<stdio.h>
int main()
 {
 int a,b;
 scanf("%d%d", &a,&b);
switch(a,b){
case 1:
printf("Addition=%d",a+b);
case 2:
printf("subtraction=%d",a-b);
break;
case 3:
printf("Multiplication=%d",a*b);
break;
case 4:
printf("division=%d",a/b);
break;
case 5:
printf("Reminder=%d",a%b);
break;
default:
printf("invalid number");
}return 0;
}
