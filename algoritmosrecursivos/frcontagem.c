int contagemalvo(int *A, int N, int K){
	int x, contagem;
	contagem = 0;
	if (N == 0)
		return 0;
	contagem = contagemalvo(A, N-1, K);
	if ( A[N-1] == K)
		return contagem + 1;
	else
		return contagem;
}
