#include <stdio.h>
int main()
{
    printf("Seja Bem-Vinde Ao Cólegio Kamome\n\n");
    printf("Existem 7 mistérios nessa escola\nQuer saber mais sobre cada um deles?\n\nDigite um número: ");
    int misterios;
    scanf("%d", &misterios);
    printf("\n\n");
    switch (misterios)
    {
    case 1:
        printf("Mistério número 1\n\n");
        printf("Os Três Guardiões do Relógio\n");
        break;
    case 2:
        printf("Mistério número 2\n\n");
        printf("A Escada Misaki\n");
        break;
    case 3:
        printf("Mistério número 3\n\n");
        printf("O Inferno dos Espelhos\n");
        break;
    case 4:
        printf("Mistério número 4\n\n");
        printf("A Sala de Artes\n");
        break;
    case 5:
        printf("Mistério número 5\n\n");
        printf("A Biblioteca das 16 Horas\n");
        break;
    case 6:
        printf("Mistério número 6\n\n");
        printf("O Ceifador\n");
        break;
    case 7:
        printf("Mistério número 7\n\n");
        printf("Hanako-kun O Garoto do Banheiro\n");
        break;
    default:
        printf("Eu disse que existem apenas 7 mistérios nessa escola\n");
        break;
    }
    return 0;
}