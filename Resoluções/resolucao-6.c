#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    float numero, soma = 0;

    printf("\n Soma de 5 números \n\n");

    for (i = 0; i < 5; i++) {
        printf(" Informe o número %d: ", i); //mesma coisa do exe. anterior, valor deve ser informado com virgula ao invés de ponto
        scanf("%f", &numero);
        soma = soma + numero;
    }

    printf("\n A soma total dos números é: %.2f\n", soma);

    return 0;
}
