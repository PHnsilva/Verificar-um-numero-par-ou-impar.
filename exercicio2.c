#include <stdio.h>

int main() {
    int num;
    
    // Solicitar o número ao usuário
    printf("Digite um número: ");
    scanf("%d", &num);
    
    // Verificar se o número é par ou ímpar
    if (num % 2 == 0) {
        printf("%d é um número par.\n", num);
    } else {
        printf("%d é um número ímpar.\n", num);
    }
    
    return 0;
}