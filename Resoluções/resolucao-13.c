#include <stdio.h>
#include <locale.h>

long long calcularFatorial(int n) { //long long pq resultado pode ultrapassar o limite do int (+20! por exemplo)
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1; // 0! e 1! são iguais a 1
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

    printf("\n Digite um número inteiro positivo para calcular o fatorial: ");
    scanf("%d", &num);

    resultado = calcularFatorial(num); //chamando a função calcularFatorial(parâmetro)

    if(resultado == -1) {
        printf("\n Erro: número negativo.\n");
    } else{
        printf("\n O fatorial de %d é: %lld\n", num, resultado);
    }

    return 0;
}
