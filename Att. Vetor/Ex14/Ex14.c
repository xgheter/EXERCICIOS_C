#include <stdio.h>
int main(){
    int v1[5] = {41,72,39,4,35},v2[5] = {0,0,0,0,0}, var,i,j;
    char option;
    	printf("Digite 'D' para Decrescente e 'C' para Crescente\n");
    	scanf("%c",&option);
	    switch (option){
		    case 'c':
		        for (i = 0; i < 5; i++)
		    {
		        for (j = i; j < 5; j++) 
		        {  
		            if (v1[j] < v1[i])
		            {
		                var = v1[i];
		                v1[i] = v1[j];
		                v1[j] = var;
		            }
		        } 
		    }
		    for (i = 0; i < 5; i++)
		    {
		        printf("%d |",v1[i]);
		    }    
		        break;
		    case 'd':
		        for (i = 0; i < 5; i++)
		    {
		        for (j = i; j < 5; j++) 
		        {  
		            if (v1[j] > v1[i])
		            {
		                var = v1[i];
		                v1[i] = v1[j];
		                v1[j] = var;
		            }
		        } 
		    }
		    for (i = 0; i < 5; i++)
		    {
		        printf("%d |",v1[i]);
		        
		    }    
		   		
		        break;
	    }

    
}
