#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fin, *fout;
	int k, N, num1;
	float num2;
	float *X;
	float maior = 0;
	float menor = 0;
	N = 0;
	fin = fopen("dados.txt", "r");
	X = (float *) malloc(N * sizeof(float));
	while(fscanf(fin, "%f%d" ,&num2, &num1) == 2){
		N++;
		X = (float *) realloc (X, N * sizeof(float));
		X[N-1] = num1;
	}
	fclose(fin);
	if (N == 0)
		maior = X[0];
		menor = X[0];
	for (k=0; k<N; k++){
		if ( X[k] > maior)
			maior = X[k];
		if (X[k] < menor)
			menor = X[k];
	}
	fout = fopen("saida.txt" , "w");
		fprintf(fout , "Maior = %f" , maior);
		fprintf(fout, "Menor = %f" , menor);
	fclose(fout);
}
