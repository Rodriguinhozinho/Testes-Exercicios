#include <stdio.h>
#include <string.h>

int tamanhostr(char *s){
    int TAM = 0;
    int k = 0;
    while(s[k] != '\0' && s[k] != '\n'){
        TAM++;
        k++;
    }
    return TAM;
}

int main(){
    char s[50];
    int TAM;
    printf("Introduza uma string:\n");
    fgets(s, 50, stdin);
    TAM = tamanhostr(s);
    printf("Tamanho da string = %d\n", TAM);
}
