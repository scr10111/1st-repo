#include <stdio.h>
int main(){
  int T[10], i, j, x, y, k, NouvElement;
  for (i=0; i<10; i++){
    printf("entrez l'entier T[%d]\n", i);
    scanf("%d", &NouvElement);
    if (i == 0){
      T[i] = NouvElement;
      continue;
    }
    else {
      for (j=0; j<=i; j++){
        if (T[j] < NouvElement){
          continue;
        }
        else{
          x = T[j] ;
          T[j] = NouvElement;
          for(k=j; k<9; k++){
            y = T[k + 1];
            T[k + 1] = x;
            x = y;
          }
          break;
        } 
      }
    }
  }
  printf("\nLe tableau triee :\n\t");
  for(i=0; i<10; i++){
    printf("%d, ", T[i]);
  }
}