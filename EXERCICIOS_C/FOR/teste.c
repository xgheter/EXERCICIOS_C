#include <stdio.h>
#include <stdlib.h>

int main(){
    int v=5,c=3,i=2,contador;
    for (contador = 10; contador == 0;contador--){
        v--;
        if (v==0)
        {
            printf("hugo");
        }
        c--;
        if (c==0)
        {
            printf("macaco");
        }
        i--;
        if (i==0)
        {
            printf("pagode");
        }
    }
}