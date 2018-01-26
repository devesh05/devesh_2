#include <stdio.h>
void main()
{
    int n,i,s=1;

    printf("Enter a integer: ");
    scanf("%d", &n);
    for(i=n;i>0;i--)
       {
       	s=s*i;
	   }
	   printf("%d",s);
}
