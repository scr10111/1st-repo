#include <stdio.h>
int main()
{
  float A[20][30], B[30][20];
  int i, j, N = 0, M = 0;
  do{
    printf("entrez le nombre de lignes\n");
    scanf("%d", &N);
  } while (N <= 0 || N > 20);
  do{
    printf("entrez le nombre de colonnes\n");
    scanf("%d", &M);
  } while (M <= 0 || M > 30);
  for (i = 0; i < N; i++){
    for (j = 0; j < M; j++){
      printf("entrez la valeur de l'element A[%d][%d]\n", i, j);
      scanf("%f", &A[i][j]);
    }
  }
  printf("La matrice A :\n");
  for (i = 0; i < N; i++){
      for (j = 0; j < M; j++){
        printf("%.2f, ", A[i][j]);
      }
      printf("\n");
    }
  printf("La transposee\n");
  if (N != M){
    for (i = 0; i < N; i++){
      for (j = 0; j < M; j++){
        B[j][i] = A[i][j];
      }
    }
    for (i = 0; i < M; i++){
      for (j = 0; j < N; j++){
        printf("%.2f, ", B[i][j]);
      }
      printf("\n");
    }
  }
  else{
    for (i = 0; i < N; i++){
      for (j = 0; j < M; j++)
      {
        B[i][j] = A[i][j];
      }
    }
    for (i = 0; i < N; i++){
      for (j = 0; j < M; j++)
      {
        A[j][i] = B[i][j];
      }
    }
    for (i = 0; i < N; i++){
      for (j = 0; j < N; j++){
        printf("%.2f, ", A[i][j]);
      }
      printf("\n");
    }
  }
}