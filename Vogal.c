// Faça um programa que leia um caractere da entrada padrão e verifique se ele é uma vogal.
// Se o usuário digitar mais ou menos de 1 caractere, exiba uma mensagem de erro.
// Em Python 3, você pode verificar quantos caracteres tem um string com a função len(). Procure como fazer!

#include "stdio.h"
int main() {
  char letra[5];
  scanf("%s", letra)
  if (strlen(letra) > 5)
  printf("1 caractere, por favor!");
  
  return 0;
}
