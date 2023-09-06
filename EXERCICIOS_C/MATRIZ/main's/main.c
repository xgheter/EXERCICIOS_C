#include <stdio.h>
int main(){
    int matriz[2][3],l,c;
    for (l = 0; l <= 1; l++)
    {
        for (c = 0; c <= 2; c++)
        {
            printf("[%d][%d] = ", l , c);
            scanf("%d", &matriz[l][c]);
        }
        
    }
     printf("============\n");
    for(l = 0; l <= 1; l++)
	{
		for(c = 0; c <= 2; c++)
		{
			printf("%d\t",  matriz[l][c]);
		}
		printf("\n");
	}
     printf("============");
}