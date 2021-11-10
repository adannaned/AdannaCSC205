// working of increment and decrement operators
#include <stdio.h>
int main()
{
   int first_int, second_int;
   float first_float, second_float;
   printf("Enter first integer value: ");
   scanf("%d", &first_int);
   printf("Enter second integer value: ");
   scanf("%d", &second_int);
   printf("Enter first float value: ");
   scanf("%d", &first_float);
   printf("Enter second float value: ");
   scanf("%d", &second_float);
   
   printf("++first_integer = %d \n", ++first_int);
   printf("++second_integer = %d \n", ++second_int);
   printf("++first_float = %d \n", ++first_float);
   printf("++second_float = %d \n", ++second_float);
   
   return 0;
}
