#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 1, cont = 0;    // Contador para os m�ltiplos encontrados

    printf("\n 5 primeiros m�ltiplos de 3, maiores que 0: \n");

    while (cont < 5) {
            if (num % 3 == 0) {   /*   => % significa resto da divis�o, ou seja, se o resto da divis�o
                                       por 3 for = a 0, a condi��o � executada */
            printf("%d\n", num);
            cont++;
        }
        num++;
    }

return 0;
}
