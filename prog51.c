#include<stdio.h>
int main()
{
FILE*fp;
fp=fopen("Student.txt","r");
if(fp==NULL){
printf("FILE Cannot be Opened");
return 0;
}
while(ch=fgets(fp))!=ECF){
printf("%c",ch);
}
fclose(fp);
return 0;
}
