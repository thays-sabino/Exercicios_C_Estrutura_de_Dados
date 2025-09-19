#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\n Contagem de 100 em 100 ate 100000: \n");

    for (num = 0; num <= 100000; num = num+100) {
        printf("%d\n", num);
    }

    return 0;
}
