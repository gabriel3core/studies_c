#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);
void update(int *p);

int main()
{
  int var = 15;
  int *ptr;

  ptr = &var;

  display(var, ptr);

  update(&var);

  display(var, ptr);

  printf("\n\nEnd.");
  while (1)
    ;
  return (0);
}

void display(int var, int *ptr)
{
  printf("\n\n");
  printf("Conteudo de var = %d\n", var);
  printf("Endereco de var = %d\n", &var);
  printf("Conteudo apontado por ptr = %d\n", *ptr);
  printf("Endereco apontado por ptr = %d\n", ptr);
  printf("Endereco do ptr = %d\n", &ptr);
}

void update(int *p)
{
  *p = *p + 1;
}

// ponteiros:
//*ptr : aponta conteudo da variavel que ptr aponta
// ptr : endereco da variavel
//&ptr : endereco do ponteiro

// printf("Conteudo de var = %d\n", var);
// printf("Endereco de var = %d\n", &var);
// printf("Conteudo apontado por ptr = %d\n", *ptr);
// printf("Endereco apontado por ptr = %d\n", ptr);
// printf("Endereco do ptr = %d\n", &ptr);