#include <stdio.h>
int main(){
  float A[10][10], B[10][10], C[10][10];
  float somme=0;
  int i, j, k=0, N, M, P;
  do{
    printf("entrez le nombre de lignes de A\n");
    scanf("%d", &N);
  }while (N<=0 || N>10);
  do{
    printf("entrez le nombre de colonnes de A\n");
    scanf("%d", &M);
  }while (M<=0 || M>10);
  do{
    printf("entrez le nombre de colonnes de B\n");
    scanf("%d", &P);
  }while (P<=0 || P>10);
  for (i=0; i<N; i++){
    for (j=0; j<M; j++){
      printf("entrez l'element A[%d][%d]\n", i, j);
      scanf("%f", &A[i][j]);
    }
  }
  for (i=0; i<M; i++){
    for (j=0; j<P; j++){
      printf("entrez l'element B[%d][%d]\n", i, j);
      scanf("%f", &B[i][j]);
    }
  }
  for (i=0; i<N; i++){
    for (k=0; k<P; k++) {
      for (j=0; j<M; j++){
        somme += (A[i][j]*B[j][k]);
      }
      C[i][k] = somme;
      somme = 0;
    }
  }
  printf("La matrice A :\n");
  for (i=0; i<N; i++){
    for (j=0; j<M; j++){
      printf("%.2f, ", A[i][j]);
    }
    printf("\n");
  }
  printf("La matrice B :\n");
  for (i=0; i<M; i++){
    for (j=0; j<P; j++){
      printf("%.2f, ", B[i][j]);
    }
    printf("\n");
  }
  printf("La matrice C :\n");
  for (i=0; i<N; i++){
    for (j=0; j<P; j++){
      printf("%.2f, ", C[i][j]);
    }
    printf("\n");
  }
}
