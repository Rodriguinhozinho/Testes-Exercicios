#include <stdio.h>
int contarpares(int N){
	int ultimo, contagem;
	if (N==0)
		return 0;
	ultimo=N % 10;
	contagem = contarpares(N/10);
	if(ultimo % 2 == 0)
		return contagem + 1;
	else
		return contagem;
}
int contarimpares(int N){
	int ultimo, contagem;
	if(N == 0)
		return 0;
	ultimo = N%10;
	contagem= contarimpares(N/10);
	if (ultimo %2 != 0)
		return contagem + 1;
	else
		return contagem;
}
int main(){
	printf("4345 tem %d digitos pares e %d digitos impares\n", contarpares(4345), contarimpares(4345));
	printf("1010101010 tem %d digitso pares e %d digitos impares\n", contarpares(1010101010), contarimpares(1010101010));
}
