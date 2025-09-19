#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 1, cont = 0;    // Contador para os múltiplos encontrados

    printf("\n 5 primeiros múltiplos de 3, maiores que 0: \n");

    while (cont < 5) {
            if (num % 3 == 0) {   /*   => % significa resto da divisão, ou seja, se o resto da divisão
                                       por 3 for = a 0, a condição é executada */
            printf("%d\n", num);
            cont++;
        }
        num++;
    }

return 0;
}
