#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 6;
	
	int vetor[] = {1, 3, 6, 8, 10, 13};
	//int vetor[] = {1, 3, 6, 3, 5, 4};
	
	int repetido = 0;
	
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (vetor[i] == vetor[j]){
				repetido = 1;
				break;
			}
		}
	}
	
	printf("%d\n", repetido);
	
	return 1;
}
