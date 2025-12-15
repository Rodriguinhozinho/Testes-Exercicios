#include <stdio.h>
#include <stdlib.h>
float contarmediaimpares(int *A, int N, int *qimpares, int *qsomaimpar){
	if (N == 0){
		*qimpares=0;
		*qsomaimpar=0;
		return 0.0f;
	}
	contarmediaimpares(A, N, qimpares, qsomaimpar);
	if(A[0] % 2 !=0){
		(*qimpares)++;
		(*qsomaimpar)*=A[0];
	}

	if (*qimpares>0)
		return (float)(*qsomaimpar)/(*qimpares);
	else
		return 0.0f;
}

int main() {
    int A[] = {10, 5, 22, 1, 4, 9, 3}; // Ímpares: 5, 1, 9, 3. Soma = 18. Quantidade = 4.
    int N = 7;
    int quantidade = 0;
    int soma = 0;
    float media;

    // A função retorna a média e atualiza 'quantidade' e 'soma' através dos ponteiros
    media = contarmediaimpares(A, N, &quantidade, &soma);

    printf("--- Relatório Recursivo ---\n");
    printf("Array: {10, 5, 22, 1, 4, 9, 3}\n");
    printf("Quantidade de ímpares: %d\n", quantidade);
    printf("Soma dos ímpares: %d\n", soma);
    printf("Média dos ímpares: %.2f\n", media); 
    // Média = 18 / 4 = 4.50

    // Teste com array vazio
    int B[] = {};
    int N_vazio = 0;
    quantidade = 0;
    soma = 0;
    media = contarmediaimpares(B, N_vazio, &quantidade, &soma);

    printf("\n--- Teste Array Vazio ---\n");
    printf("Quantidade de ímpares: %d\n", quantidade);
    printf("Média dos ímpares: %.2f\n", media); 

    return 0;
}
