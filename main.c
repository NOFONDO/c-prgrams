#include <stdio.h>
#include <stdlib.h>

int main()
{
 int y;//let y be the year.
printf("Enter a year: ");
scanf("%d", & y);
                     //check leap year conditions using if statement and logical opeartors
   if(y % 4 == 0){ //Divisible by 4
   if(y % 100 == 0){ //Divisible by 100
   if(y % 400 == 0){ //Divisible by 400 (exception for century year)
        printf("%d is a leap year .\n");
   }
   else {
       printf("%d is not a leap. \n");
   }
   else{
    printf("%d is a leap year. \n");//Divisible by 4 but not by 100
   }
   else{
       printf("%d is not a leap year. \n");//not Divisible by 4
   }
   }



    return 0;
}
