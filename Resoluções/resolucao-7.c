#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0;

    printf("\n Digite n�meros inteiros para somar. Digite 0 para encerrar.\n\n");

    for (;;) {    //sem condi��es at� que haja a parada, no caso o break
        printf(" Digite um n�mero: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        soma = soma + num;
    }
    //tamb�m � v�lido utilizar While ao inv�s de For

    printf("\n A soma total dos n�meros digitados �: %d\n", soma);


return 0;
    }
