#include <stdio.h>
void main()
{
   int n, i,f=0;
 
   printf("Enter a number\n");
   scanf("%d",&n);
   for(i=2;i<n;i++)
    { if(n%i==0)
       f=1;
	}
  if(f==1)
   printf("no");
  
  else
   printf("yes");
}
