#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int ordenador, n = 6;
	
	int vetor[] = {1, 3, 8, 6, 13, 10};
	
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - 1; j++){
			if(vetor[j + 1] < vetor [j]){
				ordenador = vetor[j+1];
				vetor[j + 1] = vetor [j];
				vetor[j] = ordenador;
			}
		}
	}
	
	for (int i = 0; i < n; i++){
		
		printf("%d / ", vetor[i]);
		
	}
	return 1;
}
