
#include <stdio.h>

// construir um array 1D com N elementos
void lerArray1DInteiros (int A[], int N)
{
  int k;

  for (k = 0; k < N; k++)
  {
    printf("Insira um numero inteiro: ");
    scanf("%d", &A[k]);
  }
}

// mostrar um array 1D com N elementos
void escreverArray1DInteiros (int A[], int N)
{
  int k;
  
  for (k = 0; k < N; k++)
  {
    printf("%d ", A[k]);
  }
  printf("\n");
}

int somaarray(int *A , int N){
        int soma;
        if (N == 1)
        return A[0];
        else{
                soma = somaarray(A , N-1);
                return soma + A[N-1];
