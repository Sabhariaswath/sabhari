#include <stdio.h>
int main()
{
int temp,s,b;
printf("enter the numbers:");
scanf("%d%d",&s,&b);
temp=temp^s;
s=s^b;
b=b^temp;
printf("swapping of two numbers %d %d",s,b);
return 0;
}
