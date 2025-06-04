#include <stdio.h>

int main() {
    int valores[6], count = 0, num;

    while (count < 6) {
        printf("Digite um número par (%d/6): ", count + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            valores[count] = num;
            count++;
        } else {
            printf("Número inválido. Apenas pares são aceitos.\n");
        }
    }

    printf("Valores na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }
    printf("\n");

}
