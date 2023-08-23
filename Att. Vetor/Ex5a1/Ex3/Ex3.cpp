#include<stdio.h>
int main()
{
	//             0   1   2  3  4       <- �ndices
	int i, v[5] = {45,-89,32,-12,33}; // <- elementos
	int s;
	s = 0;	
	for(i = 0; i<=4; i++)
	{
		s = s + v[i];
	}
	printf("%d ",s);
}
