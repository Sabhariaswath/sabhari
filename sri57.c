#include <stdio.h>
int main()
{
int a,b,temp;
printf("enter the values:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swap of two numbers is %d %d",a,b);
return 0;
}
