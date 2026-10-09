#include<stdio.h>
int main(){
float original,new,percentage;
scanf("%f%f%f", &original,&new,&percentage);
percentage=((new-original)/original)*100;
printf("percentage increase=%.3f%%", percentage);
return 0;
}
