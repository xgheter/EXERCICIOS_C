#include <stdio.h>
int main(){
    float matriz[5][4], soma, media,cont_aluno;
    for (int L = 0; L < 4; L++)
    {
        for (int C = 0; C < 2; C++)
        {
            scanf("%f",&matriz[L][C]);
        }
        
    }
    for (int L = 0; L < 4; L++)
    {
        matriz[L][3] = (matriz[L][0]+matriz[L][1]+matriz[L][2]) / 3;
        soma = soma + matriz[L][3];
    }
    media = soma / 5;
    for (int L = 0; L < 4; L++)
    {
        if (matriz[L][3] > media)
        {
            cont_aluno++;
        }
        
    }
    
    
}