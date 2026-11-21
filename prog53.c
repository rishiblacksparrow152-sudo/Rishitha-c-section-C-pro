#include<stdio.h>
int main()
{
FILE*fp;
fp = fopen("data.txt","r");
if(fp==NULL)
{
printf("File opening failed");
return 1;
}
fputc('A',fp);
fclose(fp);
printf("character written successfully");
return 0;
}
