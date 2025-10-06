#include <stdio.h>

int main() {
    double num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    if (operador == '+') {
        resultado = num1 + num2;
        printf("Resultado: %.2lf\n", resultado);
    }
    else if (operador == '-') {
        resultado = num1 - num2;
        printf("Resultado: %.2lf\n", resultado);
    }
    else if (operador == '*') {
        resultado = num1 * num2;
        printf("Resultado: %.2lf\n", resultado);
    }
    else if (operador == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2lf\n", resultado);
        } else {
            printf("Erro: Nao eh possivel dividir por 0\n");
        }
    }
    else {
        printf("Operador invalido!\n");
    }

    return 0;
}
