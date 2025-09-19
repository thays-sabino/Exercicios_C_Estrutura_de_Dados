#include <stdio.h>
#include <locale.h> //biblioteca responsável pela adição da lingua portuguesa

int main(){
    setlocale(LC_ALL, "Portuguese"); /*função vinda da biblioteca, ela permite que os caracteres especiais no
                                       português brasileiro sejam reconhecidos, como: ç, é, ú, ó, ã e outros.
                                       OBS: só funciona em conjunto com a biblioteca <locale.h> e vice-versa*/

    int n1, n2, n3, soma;
    printf("\n Informe 3 valores seguidos: ");
    scanf("%d%d%d", &n1, &n2, &n3);
    soma = n1+n2+n3;
    printf("\n A soma dos 3 valores é = %d\n\n",soma);

    return 0;
}
