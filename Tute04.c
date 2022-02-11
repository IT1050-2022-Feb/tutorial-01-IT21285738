/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//declaring Functions
int minimum(int num1 , int num2);
int maximum(int num1 , int num2);
int multiply(int num1 , int num2);

//function main begins program execution
int main() 
{
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

//function implementation
int minimum(int num1 , int num2)
{
  int min;
  if(num1 < num2)
  {
    min = num1;
  }
  else if (num1 > num2)
  {
    min = num2;
  }
  else 
    min = num1;  //if num1 and num2 are the same
  return min;
}

int maximum(int num1 , int num2)
{
  int max;
  if(num1 > num2)
  {
    max = num1;
  }
  else if (num1 < num2)
  {
    max = num2;
  }
  else 
    max = num1;  //if num1 and num2 are the same
  return max;
}

int multiply(int num1 , int num2)
{
  int mul;
  return mul = num1 * num2;
}

