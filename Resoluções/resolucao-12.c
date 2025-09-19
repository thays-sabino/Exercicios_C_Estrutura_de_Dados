#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i;
    int pares = 0, impares = 0, somaPositivos = 0, negativos = 0; //zerando tudo para não pegar oq tiver no buffer


    printf("\n Digite 10 números inteiros seguidos:\n\n");

    for (i = 0; i < 10; i++){
        printf(" Número %d: ", i+1);
        scanf("%d", &num);

        if (num % 2 == 0){ // % = resto da divisão
            pares++;
        }else {
            impares++;
        }

        if (num > 0) {
            somaPositivos += num;
        }else if (num < 0){
            negativos++;
        }
    }

    printf("\n");
    printf("a. Quantidade de numeros pares: %d\n", pares);
    printf("b. Quantidade de numeros impares: %d\n", impares);
    printf("c. A soma de todos os numeros positivos: %d\n", somaPositivos);
    printf("d. A quantidade de numeros negativos: %d\n\n", negativos);

    return 0;
}
