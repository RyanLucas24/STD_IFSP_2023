#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	int antes = 0, dps, res = 1;
	for (int i = 1; i < n; i++){
		dps = res + antes; 
		antes = res;
		res = dps;
	}
	return res;
}


int main(){
	int n, res;
	printf("Digite o termo que quer saber:\n");
	scanf ("%d", &n);
	res = fib(n);
	printf("%d\n", res);
	return 0;
}
