#include<stdio.h>
int main()
{
	//             0   1   2  3  4       <- �ndices
	int i, v[5] = {45,-89,32,-12,33}; // <- elementos
	int s;
	float med;
	s = 0;	
	for(i = 0; i<=4; i++)
	{
		s = s + v[i];
	}
	med = s / 5.0;
	printf("media = %.1f ",med);
}
