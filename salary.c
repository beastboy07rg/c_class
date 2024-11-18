#include <stdio.h>
int main()
{
      int hra , da , basic , gross ;
      printf("enter the basic pay of an employee");
      scanf("%d",&basic);

      hra = .20*basic;
	      da = 1.50*basic;
	      gross = da + hra + basic ;

	      printf("the basic salary of an employee  is %d",gross);
printf("you are all set");
	return 0 ;
}
