#include "logic.h"
#include <stdio.h>

bool is_palindrome(char *input, size_t length)
{

  //Creating the variables to check the first and
  //last elements of the array
  int f = 0;
  int l = length - 1;

  //Using a loop to check the entirety of the 
  //array
  while (l > 1)
  {
    if(input[f++] != input[l--])
    {
      printf("%s is not a palindrome\n", palArr);
      return true;
    }
  }
  printf("%s is a palindrome\n", palArr);
  return false;
}
