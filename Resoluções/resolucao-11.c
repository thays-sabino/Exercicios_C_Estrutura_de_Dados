#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int A[6] = {1, 0, 5, -2, -5, 7}; //também é possível inserir uma posição por vez ex: A[0] = {1}, A[1] = {0}...
    int soma = A[0] + A[1] + A[5];

    printf("\n A soma dos valores de A[0], A[1] e A[5] é: %d\n\n", soma);

    A[4] = 100;

    printf(" Vetor A com novos valores: \n\n");

    for (int i = 0; i < 6; i++) {
        printf(" A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
