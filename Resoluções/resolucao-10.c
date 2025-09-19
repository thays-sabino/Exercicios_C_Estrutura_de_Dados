#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i, num, maior, menor;

    printf("\n Digite 10 numeros inteiros seguidos: \n\n");

    printf("Valor 1: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    for (i = 1; i < 10; i++) {
        printf(" Valor %d: ", i+1); // o "i" nessa linha é opcional, ele serve apenas para visualização da posição dentro do loop
        scanf("%d", &num);

        if (num > maior) {
                maior = num;
        }if (num < menor) {
                menor = num;
            }
    }

    printf("\n Maior valor digitado: %d\n", maior);
    printf(" Menor valor digitado : %d\n", menor);

    return 0;
}
