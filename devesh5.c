#include <stdio.h>
void main()
{
   int n1,n2,i;
 
   printf("Enter the range\n");
   scanf("%d%d",&n1,&n2);
   for(i=n1+1;i<n2;i++)
    { if(i%2==0)
       printf("%d\n",i);
	}
  
}
