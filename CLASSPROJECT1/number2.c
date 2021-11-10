#include <stdio.h>
int main()
{
      float csc201, csc205, stat205, total, avg, per;
      printf("Enter Score for CSC201 over 100: ");
      scanf("%f", &csc201);
      printf("Enter Score for CSC205 over 100: ");
      scanf("%f", &csc205);
      printf("Enter Score for STAT205 over 100: ");
      scanf("%f", &stat205);
      
      total = csc201 + csc205 + stat205;
      printf("Your total score is: %f \n", total);
      
      avg = total/3;
      printf("Your Average score is: %f \n", avg);
      
      
      
      per = ((total/300)*100);
      printf("Your Percentage is: %f percent \n", per);
      
      
      return 0;
      
      
}
