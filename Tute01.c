/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1, mark2, avg;
  
  //  user to input marks of two subjects
  printf("Input marks of two subjects: ");
  
  // Read the marks from user input
  scanf("%d %d", &mark1, &mark2);
  
  // Calculate the average of two marks
  avg = (mark1 + mark2) / 2; 

  // Display the average of two marks to the user
  printf("Average of two marks: %d", avg);
  
  return 0;
}

