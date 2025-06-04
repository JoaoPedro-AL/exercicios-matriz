#include <stdio.h>

int main() {
    float valores[5], maior, menor, soma = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
        soma += valores[i];

        if (i == 0) {
            maior = menor = valores[i];
        } else {
            if (valores[i] > maior) maior = valores[i];
            if (valores[i] < menor) menor = valores[i];
        }
    }

    printf("Valores digitados: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\nMaior valor: %.2f\nMenor valor: %.2f\nMédia: %.2f\n", maior, menor, soma / 5.0);

}
