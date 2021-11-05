#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 1234;
  i = decimalToOctal(i);
  printf("%d", i);
  printf("\n");
  return (0);
}
