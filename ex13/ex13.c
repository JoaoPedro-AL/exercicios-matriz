#include <stdio.h>

int main() {
    float valores[5];
    int posMaior = 0, posMenor = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);

        if (valores[i] > valores[posMaior]) posMaior = i;
        if (valores[i] < valores[posMenor]) posMenor = i;
    }

    printf("Posição do maior valor: %d\n", posMaior);
    printf("Posição do menor valor: %d\n", posMenor);

}
