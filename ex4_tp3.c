#include <stdio.h>
int main()
{
  int i, j, T[10], a, b, VAR = 0;
  for (i = 0; i < 9; i++)
  {
    printf("\nEntrez la valeur de l'entier T[%d]\n", i);
    scanf("%d", &T[i]);
  }
  printf("le tableau : \n\t");
  for (i = 0; i < 9; i++)
  {
    printf("%d, ", T[i]);
  }
  do
  {
    printf("\nEntrez la valeur VAR\n");
    scanf("%d", &VAR);
  } while (VAR <= 0);
  T[9] = VAR;
  for (i = 0; i < 9; i++)
  {
    if (T[i] > VAR)
    {
      a = T[i];
      T[i] = VAR;
      for (j = i; j < 9; j++)
      {
        b = T[j + 1];
        T[j + 1] = a;
        a = b;
      }
      break;
    }
  }
  printf("le tableau apres l'ajout de VAR : \n\t");
  for (i = 0; i < 10; i++)
  {
    printf("%d, ", T[i]);
  }

  return 0;
}