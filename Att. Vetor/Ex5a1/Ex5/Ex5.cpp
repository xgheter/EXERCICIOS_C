#include<stdio.h>
int main()
{
	//             0   1   2  3  4       <- �ndices
	int i, v[5] = {45,-89,32,-12,33}; // <- elementos

	for(i = 0; i<=4; i++)
	{
		if(v[i] % 2 == 1)
		{
			printf("%d ",v[i]);		
		}
	}
	
}
