#include <stdio.h>

int main() {
    float n1, n2, media;

    // Entrada das notas
    printf("Digite a nota N1: ");
    scanf("%f", &n1);
    
    printf("Digite a nota N2: ");
    scanf("%f", &n2);

    // Cálculo da média ponderada
    media = (n1 * 0.6) + (n2 * 0.4);

    // Exibição do resultado
    printf("A média do aluno é: %.2f\n", media);

    return 0;
}