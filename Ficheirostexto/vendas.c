#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalA = 0;
    int totalB = 0;
    int totalC = 0;
    int quantidade;
    char produto;

    FILE *fp, *fout;
    fp = fopen("vendas.txt", "r");

    if (fp == NULL) {
        printf("Erro: Não foi possível abrir o ficheiro vendas.txt\n");
        return 1;
    }

    while (fscanf(fp, " %c %d", &produto, &quantidade) == 2) {
        switch (produto) {
            case 'A':
                totalA += quantidade;
                break;
            case 'B':
                totalB += quantidade;
                break;
            case 'C':
                totalC += quantidade;
                break;
            default:
                printf("Aviso: Produto desconhecido ('%c') encontrado. Ignorando.\n", produto);
                break;
        }
    }

    fclose(fp);

	fout = fopen("relatoriovendas.txt" , "w");
	fprintf(fout, "--- Relatório de Vendas ---\n");
	fprintf(fout,"Produto A: %d unidades\n", totalA);
	fprintf(fout, "Produto B: %d unidades\n", totalB);
	fprintf(fout,"Produto C: %d unidades\n", totalC);
	fprintf(fout, "---------------------------\n");
    int maior_venda = totalA;
    char produto_maior = 'A';

    if (totalB > maior_venda) {
        maior_venda = totalB;
        produto_maior = 'B';
    }
    if (totalC > maior_venda) {
        maior_venda = totalC;
        produto_maior = 'C';
    }

    fprintf(fout, "\nO produto com o maior volume de vendas foi o Produto %c (%d unidades).\n", produto_maior, maior_venda);
	fclose(fout);
}
