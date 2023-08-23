#include <stdio.h>
int main(){
    int v1[6] = {41,72,39,4,35},v2[6] = {0,0,0,0,0};
    for (int i = 4; i >= 0; i--)
    {
        v2[i] = v1[i];
        printf("%d | ",v2[i]);
    }
}