#include <stdio.h>
#include <locale.h>

long long calcularFatorial(int n) { //long long pq resultado pode ultrapassar o limite do int (+20! por exemplo)
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1; // 0! e 1! s�o iguais a 1
    }

    long long fatorial = 1;

    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    long long resultado;

    printf("\n Digite um n�mero inteiro positivo para calcular o fatorial: ");
    scanf("%d", &num);

    resultado = calcularFatorial(num); //chamando a fun��o calcularFatorial(par�metro)

    if(resultado == -1) {
        printf("\n Erro: n�mero negativo.\n");
    } else{
        printf("\n O fatorial de %d �: %lld\n", num, resultado);
    }

    return 0;
}
