#include <stdio.h>

void saudacao2(int hora){
    if (hora < 12)
    {
        printf("bom dia");
    }
    else if (hora < 18)
    {
        printf("boa tarde");
    }
    else{
        printf("boa noite");
    }
    
}

int main(){
    int hora;
    saudacao2(20);
}