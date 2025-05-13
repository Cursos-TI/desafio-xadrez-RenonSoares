#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // variaveis
    int bispo;
    char dir_bispo[30];
    int torre;
    char dir_torre[30];
    int rainha;
    char dir_rainha[30];
    char dir1_cavalo[30], dir2_cavalo[30];

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // entrada de dados para a movimentação do bispo
    printf("BISPO: Movimenta-se diagonalmente quantas casas quiser! (ex.: 'Esquerda, Cima', 'Direita, Baixo')\n"); // nivel aventureiro instrução do movimento
    printf("Digite o número de casas e a direção para o BISPO avançar:\n");
    printf("Número de Casas: \n");
    scanf("%d", &bispo);
    printf("Direção: \n");
    scanf(" %[^\n]", dir_bispo);

    // estrutura de repetição while para a movimentação do bispo
    printf("\nMovimentos do BISPO!\n");
    while (bispo > 0)
    {
        printf("%s\n", dir_bispo);
        bispo -= 1;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // entrada de dados para a movimentação da torre
    printf("\nTORRE: Movimenta-se horizontal e verticalmente quantas casas quiser! (ex.: 'Direita', 'Esquerda', 'Cima', 'Baixo')\n"); // nivel aventureiro instrução do movimento
    printf("Digite o número de casas e a direção para a TORRE avançar:\n");
    printf("Número de Casas: \n");
    scanf("%d", &torre);
    printf("Direção: \n");
    scanf("%s", dir_torre);

    // estrutura de repetição for para a movimentação da torre
    printf("\nMovimentos da TORRE!\n");
    for (torre; torre > 0; torre -= 1)
    {
        printf("%s\n", dir_torre);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // entrada de dados para a movimentação da raínha
    printf("\nRAÍNHA: Movimenta-se em qualquer direção (horizontal, vertical, diagonal) quantas casas quiser! (ex.: 'Direita', 'Esquerda', 'Esquerda, Cima')\n"); // nivel aventureiro instrução do movimento
    printf("Digite o número de casas e a direção para a RAÍNHA avançar:\n");
    printf("Número de Casas: \n");
    scanf("%d", &rainha);
    printf("Direção: \n");
    scanf(" %[^\n]", dir_rainha);

    // estrutura de repetição do-while para a movimentação da raínha
    printf("\nMovimentos da RAÍNHA!\n");
    do
    {
        printf("%s\n", dir_rainha);
        rainha -= 1;

    } while (rainha > 0);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // entrada de dados para a movimentação do cavalo
    printf("\nCAVALO: Movimenta-se em 'L' (duas casas em uma direção e uma perpendicular)! (ex.: 'Cima, Cima, Direita')\n"); // nivel aventureiro instrução do movimento
    printf("Digite a direção para a CAVALO avançar:\n");
    printf("Direção 1: \n");
    scanf("%s", dir1_cavalo);
    printf("Direção 2: \n");
    scanf("%s", dir2_cavalo);

    // estrutura de repetição while e for para a movimentação do cavalo
    printf("\nMovimentos do CAVALO!\n");
    int cavalo = 1; // flag para controlar o movimento 'L'

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("%s, ", dir1_cavalo); // imprime "Cima" duas vezes
        }
        printf("%s\n\n", dir2_cavalo); // imprime "direita" uma vez
    }

    return 0;

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
