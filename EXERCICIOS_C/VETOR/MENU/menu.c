#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int v[5]={45,-89,32,-12,33},v1[5]={41,72,39,4,35},v2[5]={0,0,0,0,0},x,s,select,i,r,var;
	float med, n;
	char option;
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
				printf("1. Fazer um programa que exiba o primeiro elemento do vetor.\n");
				sleep(2);
				//code//
					printf("%d", v[0]);
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 2:
				printf("Ex2 selecionado\n");
				sleep(2);
				printf("2. Fazer um programa que exiba somente os números negativos contidos no vetor.\n");
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
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 3:
				printf("Ex3 selecionado\n"); 
				sleep(2);
				printf("3. Fazer um programa que exiba a soma dos elementos do vetor.\n");
				sleep(2);
                //code//
					s = 0;	
					for(i = 0; i<=4; i++)
						{
							s = s + v[i];
						}
						printf("%d ",s);
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 4:
				printf("Ex4 selecionado\n");
				sleep(2);
				printf("4. Fazer um programa que exiba a media dos elementos do vetos.\n");
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
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 5:
				printf("Ex5 selecionado\n");
				sleep(2);
				printf("5. Fazer um programa que exiba na tela os números ímpares contidos no vetor.\n");
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
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 6:
				printf("Ex6 selecionado\n");
				sleep(2);
				printf("6. fazer um programa que exiba na tela o primeiro e o ultimo elemento do vetor.\n");
				sleep(2);
                //code//
					printf("%d | %d",v[0],v[4]);
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 7:
				printf("Ex7 selecionado\n");
				sleep(2);
				printf("7. Fazer um programa que exiba os elementos cujos índices sejam pares.\n");
				sleep(2);
                //code//
					for (int i = 0; i < 5; i++)
					{
						if (i%2 == 0 && i != 0)
						{
						printf("%d |",v[i]);
						} 
					
					}
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 8:
				printf("Ex8 selecionado\n");
				sleep(2);
				printf("8. Fazer uma programa que exiba True caso um valor passado por parâmetro exista no vetor, senão False.\n");
				sleep(2);
                //code//
					int n1;
						scanf("%d",&n1);
					for (int i = 0; i < 4; i++)
					{
						if (n1==v[i])
						{
							printf("true\n");
						}else{
							printf("false\n");
						}
						
					}
					sleep(2);
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 9:
				printf("Ex9 selecionado\n");
				sleep(2);
				printf("9. Fazer um programa que ordene os elementos do vetor.\n");
				sleep(2);
                //code//
					for (int i = 0; i < 5; i++)
					{
						for (int j = i; j < 5; j++) 
						{  
							if (v1[j] < v1[i])
							{
								var = v1[i];
								v1[i] = v1[j];
								v1[j] = var;
							}
						} 
					}
					for (int i = 0; i < 5; i++)
					{
						printf("%d |",v1[i]);
					}
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 10:
				printf("Ex10 selecionado\n");
				sleep(2);
				printf("10. Fazer um programa que copie os elementos do vetor v1 em v2.\n");
				sleep(2);
                //code//
					for (int i = 0; i < 5; i++)
					{
						v2[i] = v1[i];
						printf("%d | ",v2[i]);
					}
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 11:
				printf("Ex11 selecionado\n");
				sleep(2);
				printf("11. Fazer um programa que copie os elementos invertidos do vetor v1 em v2, ou seja, o primeiro elemento de v1 será o último de v2.\n");
				sleep(2);
                //code//
					for (int i = 4; i >= 0; i--)
					{
						v2[i] = v1[i];
						printf("%d | ",v2[i]);
					}
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 12:
				printf("Ex12 selecionado\n");
				sleep(2);
				printf("12. Fazer um programa que ordene de forma crescente o vetor.\n");
				sleep(2);
                //code//
					int var;
					for (int i = 0; i < 5; i++)
					{
						for (int j = i; j < 5; j++) 
						{  
							if (v1[j] < v1[i])
							{
								var = v1[i];
								v1[i] = v1[j];
								v1[j] = var;
							}
						} 
					}
					for (int i = 0; i < 5; i++)
					{
						printf("%d |",v1[i]);
					}    
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 13:
				printf("Ex13 selecionado\n");
				sleep(2);
				printf("13. Fazer um programa que ordene  de forma decrescente o vetor.\n");
				sleep(2);
                //code//
					    for (int i = 0; i < 5; i++)
						{
							for (int j = i; j < 5; j++) 
							{  
								if (v1[j] > v1[i])
								{
									var = v1[i];
									v1[i] = v1[j];
									v1[j] = var;
								}
							} 
						}
						for (int i = 0; i < 5; i++)
						{
							printf("%d |",v1[i]);
						}  
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 14:
				printf("Ex14 selecionado\n");
				sleep(2);
				printf("14. Fazer um programa que baseado na forma ('c' para crescente ou 'd' para decrescente) ordene na ordem solicitada.\n");
				sleep(2);
                //code//
					printf("Digite 'D' para Decrescente e 'C' para Crescente\n");
            		scanf("%c",&option);
					switch (option)
					{
					case 'c':
						for (int i = 0; i < 5; i++)
					{
						for (int j = i; j < 5; j++) 
						{  
							if (v1[j] < v1[i])
							{
								var = v1[i];
								v1[i] = v1[j];
								v1[j] = var;
							}
						} 
					}
					for (int i = 0; i < 5; i++)
					{
						printf("%d |",v1[i]);
					}    
						break;
					case 'd':
						for (int i = 0; i < 5; i++)
					{
						for (int j = i; j < 5; j++) 
						{  
							if (v1[j] > v1[i])
							{
								var = v1[i];
								v1[i] = v1[j];
								v1[j] = var;
							}
						} 
					}
					for (int i = 0; i < 5; i++)
					{
						printf("%d |",v1[i]);
					}    
				
						break;
					}
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 15:
				printf("Ex15 selecionado\n");
				sleep(2);
				printf("15. Fazer um programa que coloque nas posições mais a esquerda os valores pares e mais a direita os impares.\n");
				sleep(2);
                //code//
					for (int i = 0; i < 5; i++)
						{
							for (int j = i; j < 5; j++) 
							{  
								if (v1[i]%2 == 0)
								{
									var = v1[i];
									v1[i] = v1[j];
									v1[j] = var;
								}
							} 
						}
							printf("%d %d ",v1[4],v1[3]);
							printf("%5d %d",v1[0],v1[1]);
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 16:
				printf("Ex16 selecionado\n");
				sleep(2);
				printf("16. Fazer um programa que retorne quantos elementos do vetor estão acima da média.\n");
				sleep(2);
                //code//

					    for (int i = 0; i < 5; i++)
						{
							s = s + v1[i];
						}
					
						r = s/5;
						for (int i = 0; i < 5; i++)
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
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 17:
				printf("Ex17 selecionado\n");
				sleep(2);
				printf("17. Fazer uma programa que retorne o elemento de maior valor do vetor.\n");
				sleep(2);
                //code//
					x = v1[0];
	
					for(int i=1;i<4;i++){
						if(v1[i] > x){
							x = v1[i];
						}
					}
					printf("O maior valor do vetor eh %d", x);
                //code//
				printf("\n");
				system("pause");
				system("cls");
			break;
			case 0:
				system("cls");
				printf("Saindo...\n");
				sleep(2);
				break;
			default:
				printf("Digite uma opcao valida");
		}			
	} while(select != 0);
	

	
}