#include <stdio.h>
int main(){
    int v1[6] = {41,72,39,4,35},v2[6] = {0,0,0,0,0}, var;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++) 
        {  
            if (v1[i]%2 == 0)
            {
                var = v1[i];
                v1[i] = v1[j];
                v1[j] = var;
            }
        } 
    }
        printf("%d %d ",v1[4],v1[3]);
        printf("%5d %d",v1[0],v1[1]);
   
}