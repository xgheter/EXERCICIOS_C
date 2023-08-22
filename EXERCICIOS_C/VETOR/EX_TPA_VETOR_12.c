#include <stdio.h>
int main(){
    int v1[6] = {41,72,39,4,35},v2[6] = {0,0,0,0,0};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v1[i] < v1[j])
            {
                v1[j] = v1[i];  
            }  
        } 
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",v1[i]);
    }
    
}