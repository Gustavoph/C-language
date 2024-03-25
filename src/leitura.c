#include <stdio.h>



int main() {
  int age;

  scanf("What's your age %d", &age);

  if(age > 18) {
    printf("Hi");
  } else {
    printf("Bye");
  }

  return 0;
}