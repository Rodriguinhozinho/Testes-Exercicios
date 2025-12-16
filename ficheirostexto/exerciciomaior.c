#include <stdio.h>
#include <stdlib.h>
int main(){
	int N, k, num1, num2, maior, menor, soma, *A;
	FILE *fin, *fout;
	fin= fopen("3.txt", "r");
	N = 0;
	soma=0;
	A = (int *) malloc(N * sizeof(int));
	while(fscanf(fin, "%d %d", &num1, &num2) == 2){
		N = N + 2;
		A = (int *) realloc (A, N * sizeof(int));
		A[N-1] = num2;
		A[N-2] = num1;
	}
	maior = A[0];
	menor = A[0];
	for (k =0; k<N; k++){
		soma += A[k];
		if(A[k] < menor)
			menor = A[k];
		if(A[k] > maior)
			maior = A[k];
	}
	fclose(fin);
	fout= fopen("out3.txt" , "w");
	fprintf(fout, "Maior = %d\n" , maior);
	fprintf(fout, "Menor = %d\n" , menor);
	fprintf(fout, "Soma = %d\n", soma);
	fclose(fout);
}
