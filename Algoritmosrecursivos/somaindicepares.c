int somaindicespares(int *A, int N){
	int k,indice, soma;
	soma=0;
	indice = N-1
	if (N == 0)
		return 0;
	soma = somaindicespares(A, N-1);
	if (indice % 2 == 0)
		return soma += A[indice];
	else
		return soma;
}
