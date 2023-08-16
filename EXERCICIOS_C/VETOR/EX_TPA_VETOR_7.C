#include <stdio.h>
int main(){
    int v[5] = {45,-89,32,-12,33};
    for (int i = 0; i < 5; i++)
    {
        if (i%2==0)
        {
           printf("%d |",v[i]);
        }
    
    }
    
}