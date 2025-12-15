float somaPOS(float *X, N){
	float soma;
	if (N == 0)
		return 0;
	soma = somaPOS(X, N-1);
	if(X[N-1]>0)
		return soma + X[N-1];
	else
		return soma;
}
