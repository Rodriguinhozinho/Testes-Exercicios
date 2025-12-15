
#include <stdio.h>
#include <stdlib.h>
int somamultiplos(int *A,int N,int K){
	int soma=0;
	int x;
	if(N == 0)
		return 0;
	soma = somamultiplos(A, N-1, K);
	if(A[N-1] % K == 0)
		return soma + A[N-1];
	else
		return soma;
}
