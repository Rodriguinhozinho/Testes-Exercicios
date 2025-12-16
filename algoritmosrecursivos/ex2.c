#include <stdio.h>
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
	int N,soma, maior;
	printf("Insira um inteiro:\n");
	scanf("%d", &N);
	//soma = somdigito(N);
	//printf("Soma dos digitos = %d , soma);
	maior = maiordigito(N);
	printf("Maior digito= %d\n", maior);
}
