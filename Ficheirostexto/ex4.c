#include <stdio.h>
#include <stdlib.h>
int main(){
	int *A, N, k, num, soma, valormedio;
	float media;
	FILE *fin, *fout1, *fout2;
	fin = fopen("InteirosPositivos.txt", "r");
	N = 0; 
	A =  (int*) malloc(N * sizeof(int)); //fazer A=NULL é equivalente mas fazemos desta forma para preparar o array para um realloc
	while(fscanf(fin, "%d", &num) == 1){ // agora le um numero e agora mas e preciso prepara o array para receber o numero , temos de auemntar o array
		N++; //aumnetou um numero no array entao é preciso dar mais espaço num array
		A = (int*) realloc(A, N * sizeof(int)); //aumenta o espaço do array
		A[N - 1] = num; //N-1 é a ultima posição do array que é a nova posiçao depois da alocaçao de espaço , ou seja a que vai receber o numero
	}
	fclose(fin);
	soma=0;
	for (k=0 ; k<N ; k++)
		soma= soma + A[k];
	media = (float)soma/N;
	valormedio = (int) (media + 0.5);
	printf("Valor medio: %d\n" ,valormedio);
	printf("Media: %f\n", media);
	fout1 = fopen("Saida21.txt" , "w");
	fout2 = fopen("Saida22.txt" , "w");
	for(k=0; k<N; k++){
		if(A[k]<valormedio)
			fprintf(fout1, "%d\n", A[k]);
		else
			fprintf(fout2, "%d\n", A[k]);
	}
	fclose(fout1);
	fclose(fout2);
}	
