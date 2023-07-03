#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int vet[9], x, i, j, cont;
	
	for(i=0; i<9; i++){
		printf("Insira um numero inteiro:\n");
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<9; i++){
		cont = 0;
		for(j=1; j<=vet[i]; j++){
			if(vet[i] % j == 0){
				cont++;
			}
		}
		
		if(cont == 2){
			printf("%d eh primo, posicao: %d.\n", vet[i], i);
		}
	}
	
	return 0;
}
