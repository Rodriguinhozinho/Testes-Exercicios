include <stdio.h>

// ler um array 1D de numeros reais
void lerArray1DReais (float A[], int N)
{
  int k;
  
  for (k = 0; k < N; k++)
  {
    printf("Insira um numero real: ");
    scanf("%f", &A[k]);
  }  
}

// escrever um array 1D de reais numa linha
void escreverArray1DReais (float A[], int N)
{
  int k;
  
  for (k = 0; k < N; k++)
  {
    printf("%.3f ", A[k]);  // mostrar numero com 3 casas decimais
  }
  printf("\n");
}

