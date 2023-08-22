#include <stdio.h>
int main(){
    int v1[6] = {41,72,39,4,35},v2[6] = {0,0,0,0,0};
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            if (v1[i] < v1[0])
            {
                v1[0] = v1[i];      
            }
               
        }   
    }
    printf("%d |",v1[0]);
}