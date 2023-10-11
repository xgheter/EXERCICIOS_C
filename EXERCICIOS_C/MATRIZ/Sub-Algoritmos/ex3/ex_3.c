#include <stdio.h>
#include <locale.h>



void mesfunc(int mes) {
    switch (mes)
    {
    case 1:
        printf("%d == Janeiro", mes);
        break;
    case 2:
        printf("%d == Fevereiro", mes);
        break;
    case 3:
        printf("%d == Março", mes);
        break;        
    case 4:
        printf("%d == Abril", mes);
        break;
    case 5:
        printf("%d == Maio", mes);
        break;
    case 6:
        printf("%d == Julho", mes);
        break;
    case 7:
        printf("%d == Junho", mes);
        break;
    case 8:
        printf("%d == Agosto", mes);
        break;
    case 9:
        printf("%d == Setembro", mes);
        break;        
    case 10:
        printf("%d == Outubro", mes);
        break;
    case 11:
        printf("%d == Novembro", mes);
        break;
    case 12:
        printf("%d == Dezembro", mes);
        break;
    default:
        printf("Digite um num de 1-12");
        break;
    }
}



int main(){
    int mes;
    setlocale(LC_ALL,"");
    printf("Digite o mês(Número):");
    scanf("%d", &mes);
    mesfunc(mes);
}