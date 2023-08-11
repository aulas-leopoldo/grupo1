#include <stdio.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

<<<<<<< HEAD
void divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } else {
        printf("%d / %d = %d\n", a, b, a / b);
    }
=======
void subtrai(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
>>>>>>> 58261382547ad28b8fa9e16e17f8ec4c497abe3e
}

int main() {
    soma(5, 3);
<<<<<<< HEAD
    divisao(10, 2);
=======
    subtrai(5,3);
>>>>>>> 58261382547ad28b8fa9e16e17f8ec4c497abe3e
    return 0;
}
