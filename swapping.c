#include <stdio.h>
int main ()
{
int x,y,temp ,z;

printf("enter the value of x : ");
scanf("%d",&x);

printf("enter the value of y : ");
scanf("%d",&y);


temp = x ;
x = y ;
y = temp ;

printf("after swapping:\n");
    printf("x=%d\n",x);
  printf("y=%d\n",y);
  
  z =  x + y;
  printf("the adition is  ; %d\n",z);
  
return 0 ;
}
