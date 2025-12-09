
#include <stdio.h>
#include "Aleatorio.h"

void construirArray1D (int *A, int N, int P, int Q)
{
  // caso base/terminal
  if(N == 1)
    A[N-1] = gerarNumeroInteiro(P, Q);
  else{
  // caso geral
    construirArray1D(A, N-1, P, Q);
    A[N-1] = gerarNumeroInteiro(P, Q);
  }
}

void mostrarArray1D (int *A, int N)
{
  // caso base/terminal
  if(N == 1)
    printf("%d ", A[0]);
  else{
  // caso geral
    mostrarArray1D(A, N-1);
    printf("%d ", A[N-1]);
  }
}
