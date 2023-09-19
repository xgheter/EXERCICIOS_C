#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void) {
  float matriz[6][3] = {0}, v[7], v1[7], media = 0, media2 = 0, L, C;
  for (int L = 0; L <= 6; L++) {
    for (int C = 0; C <= 2; C++) {
      if (C != 1) {
        printf("digite a nota:\n");
        scanf("%f", &matriz[L][C]);
      }
    }
  }

  for (int L = 0; L <= 6; L++) {
    for (int C = 0; C <= 2; C++) {
      if (C != 2) {
        printf("%.2f\t", matriz[L][C]);
      }
      if (C == 2) {
        printf("%.2f", v[L]);
        printf("\n");
      }
    }
  }
  system("pause");
}