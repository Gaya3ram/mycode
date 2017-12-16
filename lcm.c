#include<stdio.h>
int main()
{
int a,b,m;
printf("two numbers");
scanf("%d %d",&a,&b);
{
m=(a>b)?a:b;
while(1)
{
if(m%a==0&&m%b==0)
{
printf("lcm is",a,b);
break;
}
++m;
}
return 0;
}
