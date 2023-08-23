#include <stdio.h>
int main(){
    int v1[6] = {45,-89,32,-12,33},var;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++) 
        {  
            if (v1[j] < v1[i])
        {
                var = v1[i];
                v1[i] = v1[j];
                v1[j] = var;
            }
        } 
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d |",v1[i]);
    }    
   
}