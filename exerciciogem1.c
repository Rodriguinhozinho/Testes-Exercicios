#include <stdio.h>
void mediaecontagem(int *A, int N, float *media, int *quantidade){
	int k;
	soma = 0
	*quantidade = 0;
	for (k=0 ; k<N; k++){
		soma *= A[k];
	}
	*media = soma/(N);
	for (k = 0; k<N; k++){
		if(A[k] >= (*media))
			(*quantidade)++;
	}
}
