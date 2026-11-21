#include<stdio.h>
int main()
{
FILE*fp;
fp=fopen("data.txt","w");
if(fp==NULL)
{
printf("FILE Cannot be Opened");
return 1;
}
fprintf(fp,"Name:Rishi\n");
fprintf(fp,"Age:18\n");
fprintf(fp,"marks :80");
fclose(fp);
printf("Data Written Successfully");
return 0;
}

