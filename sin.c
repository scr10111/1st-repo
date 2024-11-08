#include <stdio.h>
int main(){
  int i=3, n=-1;
  double fact=6, PuissX;
  float sin, x;
  printf("entrez la valeur de x\n");
  scanf("%f", &x);
  while (n < 0) {
    printf("Entrez la valeur de n\n");
    scanf("%d", &n);
  }
  sin = x;
  PuissX = x;
  while (i <= ((2*n)+1)) {
    PuissX *= x*x;
    if (((i-1)/2) % 2 == 0) {
      sin += PuissX/fact;
    }
    else {
      sin -= PuissX/fact;
    }
    fact *= ((i+1)*(i+2));
    i += 2;
  }
  printf("sin(%.2f) = %.2f", x, sin);
}