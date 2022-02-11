/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main begins program execution
int main()
{
  //declaring variables
  float mark1 , mark2 , total , avg;

  //take user inputs
  printf("Enter your marks for subject 1 : ");
  scanf("%f", &mark1);

  printf("Enter your marks for subject 2 : ");
  scanf("%f", &mark2);

  total = mark1 + mark2;
  avg = total / 2.0;

  printf("Your average mark is %.2f\n", avg);
  
  return 0;
}

