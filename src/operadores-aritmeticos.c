#include <stdio.h>


int main() {
  int firstValue = 10;
  int secondValue = 20;

  int sum = firstValue + secondValue;
  int sub = firstValue - secondValue;
  int mult = firstValue * secondValue;
  int div = secondValue / firstValue;
  int rest = firstValue % secondValue;
  
  firstValue++;
  secondValue--;

  int result = (++firstValue) + secondValue;

  printf("result = %d\n", result);

  return 0;
}