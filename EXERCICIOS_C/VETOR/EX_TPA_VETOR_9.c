#include <stdio.h>
int main(){
    int v[5] = {45,-89,32,-12,33},var,i,con;
    for (i = 0; i < 4; i++)
    {
        for (int j=0; j < i-1 ;j++)
        {

            if (v[j] > v[j+1])
            {
                v[j] = v[j+1];
            }
        }
              
    }
    printf("%d",v);
    
}