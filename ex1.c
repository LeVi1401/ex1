/******************
Name: Roei Lev
ID: 216015164
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit - part 1
  printf("What bit:\n");
  int num1, index1, bit1;
  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &index1);

  //checking the bit in position of index
  bit1 = num1 >> index1;
  //checking the value of the bit
  bit1 = (bit1 % 2 == 1);

  printf("The bit in position %d of number %d is: %d\n", index1, num1, bit1);

  /*Scan two integers (representing number and a position)
  Print the bit in this position. */


  // Set bit - part 2
  printf("\n\nSet bit:\n");
  int num2High, num2Low,holder2, temp2, index2, bit2;
  printf("Please enter a number:\n");
  scanf("%d", &holder2);
  printf("Please enter a position:\n");
  scanf("%d", &index2);

  num2High = holder2;
  num2High = num2High >> index2;
  temp2 = num2High << index2;
  bit2 = num2High % 2;

  //setting index to 0
  num2Low = num2High - bit2;
  //setting index to 1
  num2High = num2High + (1 ^ bit2);

  //returning the number2 back
  //index = 1
  num2High = num2High << index2;
  num2High = num2High + (holder2 - temp2);
  //index = 0
  num2Low = num2Low << index2;
  num2Low = num2Low + (holder2 - temp2);

  printf("Number with bit %d set to 1: %d\n", index2, num2High);
  printf("Number with bit %d set to 0: %d\n", index2, num2Low);

  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output*/



  // Toggle bit
  printf("\n\nToggle bit:\n");

  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number

  /*
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */


  /*
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  //printf("Bye!\n");
  return 0;
}
