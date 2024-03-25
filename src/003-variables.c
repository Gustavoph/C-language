#include <stdio.h>

int main() {
  /*
    short - 2 bytes
    int - 4 bytes
    long - 8 bytes
    float - 4 bytes
    double - 8 bytes
    char - 1 byte

    unsigned (short | long | int) - just only positive numbers

    char is storage a int value [0,255], this character is represented in ASCII
    the letter a is the number 97

    make this => char letter = 'a';
    is the same to do this => chat letter 97;
  */

  int age = 21;
  unsigned int max_age = 18;

  char letter = 97; // 'a'

  printf("%c", letter);

  int time = 1;
  double new_time = time; // this is a casting

  /*
    1 (int) => 1.00 (double)
    1.99 (float) => 1 (int)
  */

  return 0;
}