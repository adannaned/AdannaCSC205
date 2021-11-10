// Program to relate two integers using =, > or < symbol

#include <stdio.h>
int main()
{
     int number1, number2;
     printf("Enter two integers: ");
     scanf("%d %d", &number1, &number2);
     
     //checks if the two integers are equal are equal.
     if (number1 == number2) {
     printf("Result: %d = %d\n", number1, number2);
     }
     
     //checks if number 1 is greater than number 2.
     else if (number1 > number2) {
     printf("Result: %d > %d\n", number1, number2);
     }
     
     //checks if both expressions are false
     else {
     printf("Result: %d < %d\n", number1, number2);
     }
     
     return 0;
}
