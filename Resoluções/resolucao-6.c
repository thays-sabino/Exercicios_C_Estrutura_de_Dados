#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    float numero, soma = 0;

    printf("\n Soma de 5 n�meros \n\n");

    for (i = 0; i < 5; i++) {
        printf(" Informe o n�mero %d: ", i); //mesma coisa do exe. anterior, valor deve ser informado com virgula ao inv�s de ponto
        scanf("%f", &numero);
        soma = soma + numero;
    }

    printf("\n A soma total dos n�meros �: %.2f\n", soma);

    return 0;
}
