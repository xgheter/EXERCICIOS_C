#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// #include <conio.h>
int main() {
  int select, l, c, nota, key = 0, somaA = 0, Alu1 = 0, Alu2 = 0, Alu3 = 0, c1,
                          alunozerado, menor1, menor, mediaA, mediaB,
                          cont_aluno;
  int matrizA[5][4], matrizB[5][4];
  do {
    system("cls");
    printf("---------Menu----------\n");
    printf("1 == Preencher as notas (Manualmente)\n");
    printf("2 == Preencher automaticamente as notas (Auto)\n");
    printf("3 == Calcular as medias\n");
    printf("4 == Exibe as notas e medias\n");
    printf("5 == Calcular a media da sala e verificar quantos estao acima da "
           "media\n");
    printf("6 == Exibir quantos alunos tiraram ao menos um Zero\n");

    printf("0 == sair\n");
    printf("---------CB27----------\n");

    printf("Digite uma das opcoes: \n");
    scanf("%d", &select);

    system("cls");

    switch (select) {
    case 1:
      system("cls");
      printf("Opcao 1 selecionada\n");
      sleep(2);
      ///////////////begin-codigo/////////////////

      for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 2; c++) {
          printf("digite a nota do aluno:\n");
          scanf("%d", &matrizA[l][c]);
          matrizB[l][c] = matrizA[l][c];
        }
      }
      key = 1;

      /////////////////end-codigo/////////////////
      sleep(2);
      puts("(a tela será limpa)");
      system("pause");
      system("cls");
      break;
    case 2:
      system("cls");
      printf("Opcao 2 selecionada\n");
      sleep(2);
      ///////////////begin-codigo/////////////////
      for (l = 0; l <= 4; l++) {
        for (c = 0; c <= 2; c++) {
          matrizB[l][c] = rand() % 10;
          printf("%d |", matrizB[l][c]);
        }
        printf("\n");
      }
      key = 1;

      /////////////////end-codigo/////////////////
      sleep(2);
      puts("(a tela será limpa)");
      system("pause");
      system("cls");
      break;
    case 3:
      system("cls");
      printf("Opcao 3 selecionada\n");
      sleep(2);
      ///////////////begin-codigo/////////////////

      if (key >= 1) {
        for (l = 0; l <= 4; l++) {
          for (c = 0; c <= 2; c++) {
            for (c1 = c; c1 <= 2; c1++)
            if (matrizB[l][c1] < matrizB[l][c]) {
              menor1 = matrizB[l][c];
              matrizB[l][c] = matrizB[l][c1];
              matrizB[l][c1] = menor1;
            }
          }
        }
        for (l = 0; l <= 4; l++) {
          for (c = 0; c <= 2; c++) {
            somaA = somaA + matrizB[l][3];
            matrizB[l][3] = (matrizB[l][1] + matrizB[l][2]) / 3;
          }
        }

        for (l = 0; l <= 4; l++) {
          matrizA[l][3] = matrizB[l][3];
        }

        key = 3;
      } else {
        printf("Execute a opção 1 ou 2 primeiro");
      }
      mediaB = somaA / 5;
      /////////////////end-codigo/////////////////
      sleep(2);
      puts("(a tela será limpa)");
      system("pause");
      system("cls");

      break;
    case 4:
      system("cls");
      printf("Opcao 4 selecionada\n");
      sleep(2);
      ///////////////begin-codigo/////////////////

      if (key >= 3) {
        // mediaB = somaA / 5;
        for (l = 0; l <= 4; l++) {
          for (c = 0; c <= 3; c++) {
            printf("%d |", matrizB[l][c]);
          }
          printf("\n");
        }
      } else if (key <= 2) {
        printf("Execute a opção 3 primeiro");
      } else {
        printf("Execute a opção 1 ou 2 primeiro, ou 3");
      }

      /////////////////end-codigo/////////////////
      sleep(2);
      puts("(a tela será limpa)");
      system("pause");
      system("cls");
      break;
    case 5:
      system("cls");
      printf("Opcao 5 selecionada\n");
      sleep(2);
      ///////////////begin-codigo/////////////////

      if (key >= 3) {
        mediaB = somaA / 5;
        for (l = 0; l <= 4; l++) {
          if (matrizA[l][3] > mediaB) {
            cont_aluno = +1;
          }
        }
      } else if (key >= 2) {
        printf("Execute a opção 3 primeiro");
      } else {
        printf("Execute a opção 1 ou 2 primeiro");
      }

      /////////////////end-codigo/////////////////
      sleep(2);
      puts("(a tela será limpa)");
      system("pause");
      system("cls");
      break;
    case 6:
      system("cls");
      printf("Opcao 6 selecionada\n");
      sleep(2);
      ///////////////begin-codigo/////////////////

      if (key >= 2) {
        for (l = 0; l <= 4; l++) {
          for (c = 0; c <= 2; c++) {
            if (matrizA[l][c] == 0) {
              alunozerado++;
              c = 3;
            }
          }
        }
      } else {
        printf("Execute a opção 1 ou 2 primeiro");
      }

      /////////////////end-codigo/////////////////
      sleep(2);
      puts("(a tela será limpa)");
      system("pause");
      system("cls");
      break;
    case 0:
      system("cls");
      printf("Saindo....\n");
      sleep(2);
      break;
    default:
      system("cls");
      printf("Selecione uma opcao valida\n");
      sleep(2);
    }
  } while (select != 0);
}
