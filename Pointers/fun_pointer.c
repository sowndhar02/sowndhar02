#include<stdio.h>
char *fun(char ch,float f);
int main()
{
void (*fp)(void);
fp=fun;
char *p=fp('A',4.5);
printf("in main(),p=%s\n",p);
}
char *fun(char ch,float f)
{
printf("test functioin...\n");
printf("ch=%c f=%f\n",ch,f);
return "vector";
}
