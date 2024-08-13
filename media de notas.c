#include <stdio.h>

int main() {
    int num_disciplinas;

    float n1, n2, media_disciplina, media_geral = 0;
    
    float peso_n1 = 0.6, peso_n2 = 0.4;

    // Entrada do número de disciplinas
    printf("Digite o número de disciplinas: ");
    scanf("%d", &num_disciplinas);

    for (int i = 1; i <= num_disciplinas; i++) {
        // Entrada das notas de cada disciplina
        printf("\nDisciplina %d:\n", i);
        printf("Digite a nota N1: ");
        scanf("%f", &n1);
        printf("Digite a nota N2: ");
        scanf("%f", &n2);

        // Cálculo da média ponderada da disciplina
        media_disciplina = (n1 * peso_n1) + (n2 * peso_n2);
        printf("A média da disciplina %d é: %.2f\n", i, media_disciplina);

        // Acumulando para o cálculo da média geral
        media_geral += media_disciplina;
    }

    // Cálculo da média geral
    media_geral /= num_disciplinas;
    printf("\nA média geral do semestre é: %.2f\n", media_geral);

    return 0;
}
