#include <stdio.h>
int main(){
    int v1[6] = {41,72,39,4,35},v2[6] = {0,0,0,0,0}, var, j=0;;
    for (int i = 0; i < 5; i++)
    {
        for (j = j; j < 5; j++) 
        {  
            if (v1[j] < v1[i])
            {
                var = v1[i];
                v1[i] = v1[j];
            }
        } 
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d |",v1[i]);
    }
    
} //cade meu pix de 4000 ):<