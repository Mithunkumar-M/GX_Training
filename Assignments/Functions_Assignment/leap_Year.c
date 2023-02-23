#include <stdio.h>
void leap_Year(int year)
{
   if(year % 4 == 0)
   {
       if(year % 400 == 0 || year % 100 != 0)
       printf("%d is a leap year", year);
       else
       printf("%d is not a leap year", year);
   }
   else
   printf("%d is not a leap year", year);
}
int main()
{
   int year;
   printf("Enter the year: ");
   scanf("%d", &year);
   leap_Year(year);
   return 0;
}
