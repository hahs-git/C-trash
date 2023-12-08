#include <stdio.h>

int main(void)
{
		int x;
		scanf("%i",&x);
		for(int i=0;i<x;i++){
				for(int j=0;j<=i;j++){
						printf("*");
				}
				printf("\n");
		}
		return 0;
}
