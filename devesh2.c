#include <stdio.h>
void main()
{
  int n, reverse=0,temp;
  printf("Enter a number\n");
  scanf("%d",&n);
  temp = n;
  while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }
  if ( n == reverse )
      printf("yes");
   else
      printf("no");

}
