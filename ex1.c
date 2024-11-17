/******************
Name: Roei Lev
ID: 216015164
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit - part 1
  /*printf("What bit:\n");

  int num1, index1, bit1;

  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &index1);

  //checking the bit in position of index
  bit1 = num1 >> index1;
  //checking the value of the bit
  bit1 = (bit1 % 2);

  printf("The bit in position %d of number %d is: %d\n", index1, num1, bit1);

  /*Scan two integers (representing number and a position)
  Print the bit in this position. */


  // Set bit - part 2
  /*printf("\nSet bit:\n");

  int num2High, num2Low, num2, diff2, index2, bit2;

  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &index2);

  //saving the lost bits
  diff2 = num2 - ((num2 >> index2) << index2);

  //getting the wanted bit
  num2High = num2;
  num2High = num2High >> index2;
  bit2 = num2High % 2;

  //setting index to 0
  num2Low = num2High - bit2;
  //setting index to 1
  num2High = num2High + (1 ^ bit2);

  //returning the numbers back
  //index = 1
  num2High = num2High << index2;
  num2High = num2High + diff2;
  //index = 0
  num2Low = num2Low << index2;
  num2Low = num2Low + diff2;

  printf("Number with bit %d set to 1: %d\n", index2, num2High);
  printf("Number with bit %d set to 0: %d\n", index2, num2Low);

  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output*/



  // Toggle bit - part 3
  /*printf("\nToggle bit:\n");

  int num3, index3, bit3, diff3;

  printf("Please enter a number:\n");
  scanf("%d", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &index3);

  //saving the lost bits
  diff3 = num3 - ((num3 >> index3) << index3);

  //getting the wanted bit
  num3 = num3 >> index3;
  bit3 = (num3 % 2);

  //toggle the bit
  num3 += (bit3 ^ 1);
  num3 -= bit3;

  //returning the number back
  num3 = num3 << index3;
  num3 += diff3;

  printf("Number with bit %d toggled: %d\n", index3, num3);

  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number. */

  // Even - Odd - part 4
  printf("\nEven - Odd:\n");

  int num4, bit4;

  printf("Please enter a number:\n");
  scanf("%d", &num4);

  //return true(1) if even and false(0) if odd
  bit4 = (~num4 % 2);
  printf("%d\n", (bit4 && 1));

  /* Scan an integer
  If the number is even - print 1, else - print 0. */



  // 3, 5, 7, 11 - part 5
  printf("\n3, 5, 7, 11:\n");

  int firstNum5, secondNum5, sum5, bitPos3, bitPos5, bitPos7, bitPos11;

  printf("Please enter the first number (octal):\n");
  scanf("%o", &firstNum5);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &secondNum5);

  //getting the sum in hexadecimal
  sum5 = firstNum5 + secondNum5;
  printf("The sum in hexadecimal: %X\n", sum5);

  //setting the bits in the correct positions
  bitPos3 = ((sum5 >> 3) % 2) == 1;
  bitPos5 = ((sum5 >> 5) % 2) == 1;
  bitPos7 = ((sum5 >> 7) % 2) == 1;
  bitPos11 = ((sum5 >> 11) % 2) == 1;

  printf("The 3,5,7,11 bits are: %d%d%d%d\n", bitPos3, bitPos5, bitPos7,bitPos11);
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  return 0;
}
