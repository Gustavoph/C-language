#include <stdio.h>

/*
  - Uma variável constante não pode ser reatribuida uma vez instanciada não pode ser reatribuida
  - Podemos usar const ou define
  - Uma constante não inicializada recebe o valor zero por padrão
*/

#define PI 3.416
#define day 21
#define sex 'm'
#define msg "Hello World!"

int main() {
  const int age = 21;
  const int b;

  // age = 22; => isso resulta em um erro

  return 0;
}