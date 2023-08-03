#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n, soma = 0, soma_par = 0;
	
	printf("Type a number and we will add him to you:\n");
	scanf("%d", &n);
	
	for(int i=1; i <= n; i++){
		soma = soma + i;
	}
	
	printf("%d\n", soma);
	
	for (int i = 2; i <= n; i++){
		if (i % 2 == 0){
			soma_par = soma_par + i;
		}
	}
	
	printf("%d\n", soma_par);
	
	return 1;
}
