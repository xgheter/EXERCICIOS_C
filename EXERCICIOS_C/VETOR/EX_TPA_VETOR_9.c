#include <stdio.h>
int main(){
    int v[5] = {45,-89,32,-12,33},digitado,i;
    for ( i = 0; i < 5; i++)
    {
        for (v[i] = v[i]; 100; v[i]--)
        {
            if (v[i] == -90)
            {
                printf("%d",v[i]);
            }
            
            
        }
    }
    
}