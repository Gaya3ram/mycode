#include<stdio.h>
int main()
{
int n,org,rem,result=0;
printf("enter the number");
scanf("%d",&n);
if(n!=0)
{
rem=org%10;
result=rem*rem*rem;
org=n/10;
}
if(result==0)
printf('armstrong number");
else
printf("not a armstrong number");
}
