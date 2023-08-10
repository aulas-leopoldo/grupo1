#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

void divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } else {
        printf("%d / %d = %d\n", a, b, a / b);
    }
}

int main() {
    soma(5, 3);
    multiplica(5, 3);
    divisao(10, 2);
    return 0;
}
