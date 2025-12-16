int contarpositivos(int *A, int N){
	N = 0;
	int contagem;
	A = (int *) malloc(N * sizeof(int));
	contarpositivos(A, N-1);
	
