/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

//function main begins program execution
int main() 
{
  //declaring variables
  int num , count = 1 , total = 0;

  //take user inputs
  printf("Enter a number : ");
  scanf("%d", &num);

  while(count <= num)
  {
    total += count;
    count++;   
  }

  printf("Total is %d\n", total);
  
  return 0;
}

