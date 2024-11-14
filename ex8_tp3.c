#include <stdio.h>
int main(){
  int A[10][10], B[11][11];
  int n, m, i, j, somme;
  do{
    printf("entrez le nombre de lignes de A\n");
    scanf("%d", &n);
  }while(n <= 0 || n>10);
  do{
    printf("entrez le nombre de colonnes de A\n");
    scanf("%d", &m);
  }while(m <= 0 || m>10);
  for(i=0; i<n; i++){
    for (j=0; j<m; j++){
      do{
        printf("entrez la valeur A[%d][%d] :\n", i, j);
        scanf("%d", &A[i][j]);
      }while((A[i][j] != 1) && (A[i][j] != 0));
    }
  }
  for(i=0; i<n; i++){
    for (j=0; j<m; j++){
      B[i][j] = A[i][j];
    }
  }
  for(i=0; i<n; i++){
    somme=0;
    for(j=0; j<m; j++){
      somme+=A[i][j];
    }
    B[i][m] = somme % 2;
  }
  for(j=0; j<=m; j++){
    somme=0;
    for(i=0; i<n; i++){
      somme+=B[i][j];
    }
    B[n][j] = somme % 2;
  }
  printf("\nla matrice A :");
  for (i=0; i<n; i++){
    printf("\n");
    for (j=0; j<m; j++){
      printf("%d, ", A[i][j]);
    }
  }
  printf("\nla matrice B :");
  for (i=0; i<=n; i++){
    printf("\n");
    for (j=0; j<=m; j++){
      printf("%d, ", B[i][j]);
    }
  }
}