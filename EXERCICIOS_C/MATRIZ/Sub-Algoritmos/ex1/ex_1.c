#include <stdio.h>
#include <locale.h>



void saudacao() {
    setlocale(LC_ALL,"");
    printf ("Bom dia, Usuário!");
}




int main() {
    saudacao();
}