#include<stdio.h>
int main()
{
FILE*fp;
char str[50];
fp = fopen("data.txt","w");
if(fp==NULL)
{
printf("File opening failed");
return 1;
}
fputs("Welcome to C programming\n",fp);
fclose(fp);
printf("string written successfully");
return 0;
}
