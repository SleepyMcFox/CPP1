#include "logic.h"
#include <stdio.h>

int main(void) {

  // setup your test cases here
  is_palindrome("daad", 4);
  is_palindrome("racecar", 7);
  is_palindrome("chicken", 7);
  if (!is_palindrome("test", 4)) {
    printf("test is not a palindrome");
  }
}
