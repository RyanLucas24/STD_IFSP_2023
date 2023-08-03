#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int ordenado = 1, n = 6;
	
	int vetor[] = {1, 3, 6, 8, 10, 13};
	
	for (int i = 0; i < n - 1; i++){
		
		if(vetor[i+1] < vetor [i]){
			ordenado = 0;
		}
		
	}
	
	if(ordenado == 1){
		printf("Vetor ordenado\n");
	}
	else{
		printf("Vetor nao ordenado\n");
	}
	
	
	return 1;
}
