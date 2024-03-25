#include <stdio.h>

/*
  - printf é a função principal para poder imprimir mensagens
  - para imprimir variáveis é precisso passar um formatador
   - int %d
   - long long %ld
   - float %f
   - double %lf
   - char %c
   - string %s
  - 
*/

int main() {
  int age = 21;
  float height = 1.75;
  char name[] = "Gustavo";

  printf("Name: %s\nAge: %d\nheight: %.2f\n", name, age, height);

  return 0;
}