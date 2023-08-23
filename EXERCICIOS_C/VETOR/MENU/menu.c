#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int v[5]={45,-89,32,-12,33},v1[5]={41,72,39,4,35},v2[5]={0,0,0,0,0},x,s,select,i;
	float med;
	do{
			printf("---------Menu----------\n");
			printf("1 == Ex1\n");
			printf("2 == Ex2\n");
			printf("3 == Ex3\n");
			printf("4 == Ex4\n");
			printf("5 == Ex5\n");
			printf("6 == Ex6\n");
			printf("7 == Ex7\n");
			printf("8 == Ex8\n");
			printf("9 == Ex9\n");
			printf("10 == Ex10\n");
			printf("11 == Ex11\n");
			printf("12 == Ex12\n");
			printf("13 == Ex13\n");
			printf("14 == Ex14\n");
			printf("15 == Ex15\n");
			printf("16 == Ex16\n");
			printf("17 == Ex17\n");
			
			printf("0 == sair\n");
		printf("---------CB27----------\n");	
		
		printf("Digite uma das opcoes: \n");
		scanf("%d", &select);
		
		system("cls");
		switch(select){
			case 1:
				printf("Ex1 selecionado\n");
				sleep(2);
				printf("1. Fazer um programa que exiba o primeiro elemento do vetor.");
				sleep(2);
				//code//
					printf("%d", v[0]);
                //code//
				system("cls");
			break;
			case 2:
				printf("Ex2 selecionado\n");
				sleep(2);
				printf("2. Fazer um programa que exiba somente os números negativos contidos no vetor.");
				sleep(2);
				//code//
					for(i = 0; i<=4; i++)
						{
							if (v[i] < 0)
							{
								printf("%d ", v[i]);
							}
						}
                //code//
				system("cls");
			break;
			case 3:
				printf("Ex3 selecionado\n"); 
				sleep(2);
				printf("3. Fazer um programa que exiba a soma dos elementos do vetor.");
				sleep(2);
                //code//
					s = 0;	
					for(i = 0; i<=4; i++)
						{
							s = s + v[i];
						}
						printf("%d ",s);
                //code//
				system("cls");
			break;
			case 4:
				printf("Ex4 selecionado\n");
				sleep(2);
				printf("4. Fazer um programa que exiba a media dos elementos do vetos.");
				sleep(2);
                //code//
					s = 0;	
					for(i = 0; i<=4; i++)
						{
							s = s + v[i];
						}
						med = s / 5.0;
						printf("media = %.1f ",med);
                //code//
				system("cls");
			break;
			case 5:
				printf("Ex5 selecionado\n");
				sleep(2);
				printf("5. Fazer um programa que exiba na tela os números ímpares contidos no vetor.");
				sleep(2);
                //code//
					for(i = 0; i<=4; i++)
						{
							if(v[i] % 2 == 1)
							{
								printf("%d ",v[i]);		
							}
						}
                //code//
				system("cls");
			break;
			case 6:
				printf("Ex6 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 7:
				printf("Ex7 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 8:
				printf("Ex8 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 9:
				printf("Ex9 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 10:
				printf("Ex10 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 11:
				printf("Ex11 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 12:
				printf("Ex12 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 13:
				printf("Ex13 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 14:
				printf("Ex14 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 15:
				printf("Ex15 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 16:
				printf("Ex16 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 17:
				printf("Ex17 selecionado\n");
				sleep(2);
                //code//

                //code//
				system("cls");
			break;
			case 0:
				system("cls");
				printf("Saindo...");
				sleep(2);
				break;
			default:
				printf("Digite uma opcao valida");
		}			
	} while(select != 0);
	

	
}