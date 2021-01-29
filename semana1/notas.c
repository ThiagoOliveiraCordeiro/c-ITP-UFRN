#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite as três notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media do aluno: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aprovado!\n");
    } else if (media <= 3.0) {
        printf("Reprovado!\n");
    } else if (media >= 5 && nota1 >= 3 && nota2 >= 3 && nota3 >= 3) {
        printf("Aprovado por nota!\n");
    } else {
        printf("\nDigite a quarta nota: \n");
        scanf("%f", &nota4);

        if (nota4 > nota1 && nota1 <= nota2 && nota1 <= nota3) {
             media = (nota4 + nota2 + nota3) / 3;
        } else if (nota4 > nota2 && nota2 <= nota1 && nota2 <= nota3) {
             media = (nota4 + nota1 + nota3) / 3;
        } else if (nota4 > nota3 && nota3 <= nota1 && nota3 <=nota2) {
             media = (nota4 + nota1 + nota2) / 3;
        }

        printf("Media do aluno: %.2f\n", media);

        if (media >= 7.0) {
            printf("Aprovado!");
        } else if (media >= 5.0 && nota4 >= 3) {
            printf("Aprovado na reposição");
        } else {
            printf("Reprovado");
        }
    }

    return 0;
}