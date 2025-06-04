#include <stdio.h>

int main() {
    float notas[15], soma = 0.0, media;

    for (int i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 15.0;
    printf("Média geral: %.2f\n", media);

}
