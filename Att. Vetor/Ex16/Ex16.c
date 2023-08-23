#include <stdio.h>
int main(){
    int v1[5] = {41,72,39,4,35},v2[5] = {0,0,0,0,0},s=0, r, n= 0, i;
    
	for (i = 0; i < 5; i++)
    {
        s = s + v1[i];
    }
   
    r = s/5;
    for (i = 0; i < 5; i++)
    {
        if (v1[i] > r)
        {
            v2[i] = v1[i];
        }
        if (v2[i] > r )
         {
            n++;
         }
    }
    printf("%d |",n);
    // for (int i = 0; i < 4; i++)
    // {
    //     if (v1[i] != 0)
    //     {
    //         printf("%d |",i);
    //     }
        
    // }
    
    
}
