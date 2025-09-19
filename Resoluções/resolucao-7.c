#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0;

    printf("\n Digite números inteiros para somar. Digite 0 para encerrar.\n\n");

    for (;;) {    //sem condições até que haja a parada, no caso o break
        printf(" Digite um número: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        soma = soma + num;
    }
    //também é válido utilizar While ao invés de For

    printf("\n A soma total dos números digitados é: %d\n", soma);


return 0;
    }
