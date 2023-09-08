#include <stdio.h>

int main(void) {
  float matriz[6][3], media, L, C;
  for (int L = 0; L <= 6; L++) {
    for (int C = 0; C <= 3; C++) {
      printf("digite a nota:\n");
      if (C < 3) {
        scanf("%f", &matriz[L][C]);
      }
    }
    media = matriz[L][C] + matriz[L][C + 1];
  }
  for (int L = 0; L <= 6; L++) {
    for (int C = 0; C < 3; C++) {
      printf("%.2f\t", matriz[L][C]);
      if (C == 2) {
        printf("\n");
      }
    }
  }
}