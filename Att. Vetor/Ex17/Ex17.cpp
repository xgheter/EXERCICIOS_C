#include<stdio.h>
int main(){
	int x, v1[5] = {41,72,29,4,35}, v2[5] = {0,0,0,0,0};
	
	x = v1[0];
	
	for(int i=1;i<4;i++){
		if(v1[i] > x){
			x = v1[i];
		}
	}
	printf("O maior valor do vetor eh %d", x);
}
