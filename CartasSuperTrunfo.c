#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <Windows.h>

// Funcao para calcular a densidade populacional (hab/km²)
float calcular_densidade_populacional(unsigned long int populacao, float area)
{
    return (float)populacao / area;
}

// Funcao para calcular o PIB per capita (em reais)
float calcular_pib_per_capita(unsigned long int populacao, float pib)
{
    float bilhao = 1e9; // PIB fornecido em bilhoes de reais
    return pib * bilhao / (float)populacao;
}

// Funcao para exibir os detalhes de uma carta
void mostrar_carta(
    char estado,
    char *codigo,
    char *cidade,
    unsigned long int populacao,
    float area,
    float pib,
    int pontos_turisticos,
    float densidade_populacional,
    float pib_per_capita)
{
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
}

int main()
{
    // Variaveis para armazenar os dados das cartas
    char carta_1_estado, carta_2_estado;
    char carta_1_codigo[4], carta_2_codigo[4];
    char carta_1_cidade[31], carta_2_cidade[31];
    unsigned long int carta_1_populacao, carta_2_populacao;
    float carta_1_area, carta_2_area, carta_1_pib, carta_2_pib;
    int carta_1_pontos_turisticos, carta_2_pontos_turisticos;
    float carta_1_densidade_populacional, carta_2_densidade_populacional;
    float carta_1_pib_per_capita, carta_2_pib_per_capita;
    long double carta_1_super_poder, carta_2_super_poder;
    char *delimitador = "\n\n-------------------------------------\n";

    // Entrada de dados da Carta 1
    printf("Preencha abaixo as informacoes da Carta 1.\n\n");

    printf("Digite o estado (sigla de um caractere): ");
    scanf(" %c", &carta_1_estado);
    getchar(); // Limpa o buffer deixado pelo scanf

    printf("Digite o codigo do estado: ");
    scanf("%s", carta_1_codigo);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(carta_1_cidade, 31, stdin);
    carta_1_cidade[strcspn(carta_1_cidade, "\n")] = 0; // Remove o \n do fgets

    printf("Digite a população da cidade: ");
    scanf("%lu", &carta_1_populacao);
    getchar();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta_1_area);
    getchar();

    printf("Digite o PIB do estado (em bilhões de reais): ");
    scanf("%f", &carta_1_pib);
    getchar();

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &carta_1_pontos_turisticos);
    getchar();

    // Calculo dos valores derivados
    carta_1_densidade_populacional = calcular_densidade_populacional(carta_1_populacao, carta_1_area);
    carta_1_pib_per_capita = calcular_pib_per_capita(carta_1_populacao, carta_1_pib);
    carta_1_super_poder = (long double)carta_1_populacao +
                          (long double)carta_1_area +
                          (long double)carta_1_pib +
                          (long double)carta_1_pontos_turisticos +
                          (long double)carta_1_pib_per_capita -
                          (long double)carta_1_densidade_populacional;

    // Exibicao da Carta 1
    printf("%s", delimitador);
    printf("Informacões da carta:\nCarta 1:\n");
    mostrar_carta(carta_1_estado, carta_1_codigo, carta_1_cidade, carta_1_populacao, carta_1_area, carta_1_pib, carta_1_pontos_turisticos, carta_1_densidade_populacional, carta_1_pib_per_capita);

    // Entrada de dados da Carta 2
    printf("%s", delimitador);
    printf("Preencha abaixo as informacões da Carta 2.\n\n");

    printf("Digite o estado: ");
    scanf(" %c", &carta_2_estado);
    getchar();

    printf("Digite o código do estado: ");
    scanf("%s", carta_2_codigo);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(carta_2_cidade, 31, stdin);
    carta_2_cidade[strcspn(carta_2_cidade, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%lu", &carta_2_populacao);
    getchar();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta_2_area);
    getchar();

    printf("Digite o PIB do estado: ");
    scanf("%f", &carta_2_pib);
    getchar();

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &carta_2_pontos_turisticos);
    getchar();

    // Calculo dos valores derivados
    carta_2_densidade_populacional = calcular_densidade_populacional(carta_2_populacao, carta_2_area);
    carta_2_pib_per_capita = calcular_pib_per_capita(carta_2_populacao, carta_2_pib);
    carta_2_super_poder = (long double)carta_2_populacao +
                          (long double)carta_2_area +
                          (long double)carta_2_pib +
                          (long double)carta_2_pontos_turisticos +
                          (long double)carta_2_pib_per_capita -
                          (long double)carta_2_densidade_populacional;

    // Exibicao da Carta 2
    printf("%s", delimitador);
    printf("Informações da carta:\nCarta 2:\n");
    mostrar_carta(carta_2_estado, carta_2_codigo, carta_2_cidade, carta_2_populacao, carta_2_area, carta_2_pib, carta_2_pontos_turisticos, carta_2_densidade_populacional, carta_2_pib_per_capita);

    // Comparacao das cartas
    printf("%s", delimitador);
    printf("Comparação de Cartas:\n");

    if (carta_1_populacao > carta_2_populacao)
        printf("População: Carta 1 venceu.\n");
    else
        printf("População: Carta 2 venceu.\n");

    if (carta_1_area > carta_2_area)
        printf("Área: Carta 1 venceu.\n");
    else
        printf("Área: Carta 2 venceu.\n");

    if (carta_1_pib > carta_2_pib)
        printf("PIB: Carta 1 venceu.\n");
    else
        printf("PIB: Carta 2 venceu.\n");

    if (carta_1_pontos_turisticos > carta_2_pontos_turisticos)
        printf("Pontos Turísticos: Carta 1 venceu.\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu.\n");

    if (carta_1_densidade_populacional < carta_2_densidade_populacional)
        printf("Densidade Populacional: Carta 1 venceu.\n");
    else
        printf("Densidade Populacional: Carta 2 venceu.\n");

    if (carta_1_pib_per_capita > carta_2_pib_per_capita)
        printf("PIB per Capita: Carta 1 venceu.\n");
    else
        printf("PIB per Capita: Carta 2 venceu.\n");

    if (carta_1_super_poder > carta_2_super_poder)
        printf("Super Poder: Carta 1 venceu.\n");
    else
        printf("Super Poder: Carta 2 venceu.\n");


    printf("\n\nFechando o programa em 10 segundos...");
    sleep(10);

    return 0;
}
