#include <stdio.h>
#include <stdlib.h>
int main(){
    int voto,cont,H=0,Z=0,L=0,B=0,N=0;
    
    printf("DIGITE SEU VOTO POR FAVOR:\n[1] HUGUINHO\n[2] ZEZINHO\n[3] LUIZINHO\n[4] BARNCO\n[5] NULO\n");

    for (cont = 0; cont < 10 ; cont++)
    {
        scanf("%d",&voto);
        switch (voto)
    {
    case 1:
        H = H+1;
        break;
    case 2:
        Z++;
        break;
     case 3:
        L++;
        break;
     case 4:
        Z++;
        break;
    case 5:
        N++;
        break;
    default:
        break;
    }
    } 
    float por_h,por_z,por_l,por_b,por_n;
    por_h = (H / 10.0) * 100;
    por_z = (Z / 10.0) * 100;
    por_l = (L / 10.0) * 100;
    por_b = (B / 10.0) * 100;
    por_n = (N / 10.0) * 100;   // comece a resolver isso porque o resto ja foi (: 
printf("porcentagem hughuinho:%.2f\nporcentagem zezinho:%.2f\nporcentagem "
         "luizinho:%.2f\nporcentagem brancos:%.2f\nporcentagem nulos:%.2f\n",
         por_h, por_z, por_l, por_b, por_n);
    int contador_colocados=0;
    for (contador_colocados = 0;contador_colocados<=20;contador_colocados++)
    {
    H++;
    Z++;
    L++;
    if (H == 20)
    {
        printf("HUGUINHO\n");
    }
    if (Z == 20)
    {
        printf("ZEZINHO\n");
    }
    if (L == 20)
    {
        printf("LUIZINHO\n");
    }
    }   
}