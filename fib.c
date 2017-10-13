#include<stdio.h>
int main()
{
int i,n,t1=0,t2=0,next;
printf('enter the number");
scanf("%d",&n);
printf("the fiboancci series is");
for(i=1;i<=n;++i)
{
printf("%d",t1);
next=t1+t2;
t1=t2;
t2=next;
return 0;
}
}
