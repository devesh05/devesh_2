#include<stdio.h>
void main()
{
int i,p,n,s=1;
printf("enter the number and power");
scanf("%d%d",&n,&p);
for(i=1;i<=p;i++)
 {
 	s=s*n;
 }
 printf("%d",s);
}
