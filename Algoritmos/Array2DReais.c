
#include <stdio.h>

#define MAXCOL 10

// construir um array 2D com L linhas e C colunas
void lerArray2DReais (float A[][MAXCOL], int L, int C)
{
  int i, j;
  
  for (i = 0; i < L; i++)
  {
    printf("Linha %d:\n", i);
    for (j = 0; j < C; j++)
    {
      printf("Inserir um real: ");
      scanf("%f", &A[i][j]);
    }
  }
}

// mostrar um array 2D com L linhas e C colunas
void escreverArray2DReais (float A[][MAXCOL], int L, int C)
{
  int i, j;
  
  for (i = 0; i < L; i++)
  {
    for (j = 0; j < C; j++)
    {
      printf("%6.2f ", A[i][j]);  // mostrar numero com 2 casas decimais
    }
    printf("\n");
  }
}
