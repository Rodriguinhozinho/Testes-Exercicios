#include <stdio.h>
#include <stdlib.h>
#include "Aleatorio.h"
#include "OperacoesBasicas.h"
#include "Array1DInteiros.h"
int maiordigito(int N){
        int unidades, maior;
        if (N<=9)
                return N;
        else {
                unidades = N%10;
                maior = maiordigito(N/10);
                if (maior > unidades)
                        return maior;
                else
                        return unidades;
        }
}

int main(){
        int N, V, tamV, soma,somaA, maior;
	printf("Insira um inteiro:\n");
        scanf("%d", &N);
        //soma = somdigito(N);
        //printf("Soma dos digitos = %d , soma);
        maior = maiordigito(N);
        printf("Maior digito= %d\n", maior);

	tamV = gerarNumeroInteiro(1,20);
	//V = (int *) malloc(tamV * sizeof(int));
	V = lerArray1DInteiros(V, tamV);
	escreverArray1DInteiros(V, tamV);
	somaA = somaarray(V, tamV);
	printf("Soma do array: %d \n", somaA);
}
