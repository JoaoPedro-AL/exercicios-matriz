#include <stdio.h>

int main() {
    float numeros[10], somaPositivos = 0.0;
    int negativos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            negativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

}
