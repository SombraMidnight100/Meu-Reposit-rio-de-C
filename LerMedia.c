#include <stdio.h>
int main()
{
    printf("Digite a media do aluno: ");
    float lerM;
    scanf("%f", &lerM);
    printf("\n\n");
    if (lerM >= 7)
    {
        printf("Aprovade\nCom Media: %.2f\n", lerM);
    }
    else if (lerM >= 4)
    {
        printf("Vai Fazer a Final \nCom Media: %.2f\n", lerM);
    }
    else
    {
        printf("Reprovade \nCom Media: %.2f\n", lerM);
    }

    return 0;
}