#include <stdio.h>

/**
 * @brief Determina a soma dos números negativos e positivos no ficheiro "Inteiros.txt"
 * e guarda os resultados no ficheiro "Saida1.txt".
 * * NOTA: Esta implementação assume que o ficheiro de entrada existe e contém
 * apenas números inteiros válidos, um por linha ou separados por espaços.
 * * @return 0 se o programa for executado com sucesso, 1 em caso de erro.
 */
int main() {
    FILE *fin;
    FILE *fout;
    int numero;
    int soma_negativos = 0; // Usar long long para evitar overflow
    int soma_positivos = 0; // Usar long long para evitar overflow

    // Abrir o ficheiro de entrada para leitura
    fin = fopen("Inteiros.txt", "r");
    if (fin == NULL) {
        printf("Erro ao abrir o ficheiro de entrada \"Inteiros.txt\".\n");
        return 1; // Retorna erro
    }

    // Processar o ficheiro de entrada
    // O fscanf retorna o número de itens lidos com sucesso.
    // Retorna EOF (End Of File) quando o final do ficheiro é alcançado.
    while (fscanf(fin, "%d", &numero) != EOF) {
        if (numero < 0) {
            soma_negativos += numero;
        } else if (numero > 0) {
            soma_positivos += numero;
        }
        // Nota: O número zero (0) não é adicionado a nenhuma das somas.
    }

    // 3. Fechar o ficheiro de entrada
    fclose(fin);

    // 4. Abrir o ficheiro de saída para escrita (cria se não existir, sobrescreve se existir)
    fout = fopen("Saida1.txt", "w");
    if (fout == NULL) {
        printf("Erro ao abrir o ficheiro de saída \"Saida1.txt\".\n");
        return 1; // Retorna erro
    }

    // 5. Guardar os resultados no ficheiro de saída e imprimir no ecrã
    fprintf(fout, "Soma dos números negativos: %d\n", soma_negativos);
    fprintf(fout, "Soma dos números positivos: %d\n", soma_positivos);
    
    printf("Resultados calculados:\n");
    printf("Soma dos números negativos: %d\n", soma_negativos);
    printf("Soma dos números positivos: %d\n", soma_positivos);
    printf("\nOs resultados foram guardados no ficheiro \"Saida1.txt\".\n");

    // 6. Fechar o ficheiro de saída
    fclose(fout);

    return 0; // Retorna sucesso
}
