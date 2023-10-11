#include <stdio.h>
void placa_carro(int placa){
    switch (placa)
    {
    case 1:
        printf("o dia do seu rodízio é: segunda-feira");
        break;
    case 2:
        printf("o dia do seu rodízio é: segunda-feira");
        break;
    case 3:
        printf("o dia do seu rodízio é: terça-feira");
        break;
    case 4:
        printf("o dia do seu rodízio é: terça-feira");
        break;
    case 5:
        printf("o dia do seu rodízio é: quarta-feira");
        break;
    case 6:
        printf("o dia do seu rodízio é: quarta-feira");
        break;
    case 7:
        printf("o dia do seu rodízio é: quinta-feira");
        break;
    case 8:
        printf("o dia do seu rodízio é: quinta-feira");
        break;
    case 9:
        printf("o dia do seu rodízio é: sexta-feira");
        break;
    case 10:
        printf("o dia do seu rodízio é: sexta-feira");
        break; 
    default:
        printf("digite uma nota válida");
        break;
    }
}


int main(){
    int placa;
    placa_carro(20);
}