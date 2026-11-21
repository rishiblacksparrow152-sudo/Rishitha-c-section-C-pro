#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}int num;int found=0;scanf("%d",&num);
for(int i=0;i<n;i++){
if(num%2==0){
found=1;
printf("Even %d =%d",num,i);
break;
}if(found==0){
printf("Odd");
}
}
}
