#include <stdio.h>
#include <stdlib.h>
int main()
{
	float *X, num1, maior, menor;
	int tamX, num2, k;
	FILE *f;
// 1º)
	f = fopen("dados.txt", "r");
	tamX = 0;
	X = (float*) malloc(tamX * sizeof(float));
	while (fscanf(f, "%f%d", &num1, &num2) == 2) {
		tamX = tamX + 1;
		X = (float*) realloc(X, tamX * sizeof(float));
		X[tamX-1] = num1;
	}
	fclose(f);
// 2º)
	if (tamX > 0) {
	maior = X[0];
	menor = X[0];
	}
	for (k = 1; k < tamX; k++) {
		if (X[k] > maior)
			maior = X[k];
		else
		if (X[k] < menor)
			menor = X[k];
	}
// 3º)
	f = fopen("saida.txt", "w");
	fprintf(f, "Maior = %f\n", maior);
	fprintf(f, "Menor = %f\n", menor);
	fclose(f);
}
