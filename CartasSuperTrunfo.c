#include <stdio.h>
#include <string.h>

float calcular_densidade_populacional(int populacao, float area)
{
    return (float) populacao / area;
}

float calcular_pib_per_capita(int populacao, float pib)
{
    float bilhao = 1e9;
    return  pib * bilhao / (float) populacao;
}

int main()
{
    // Carta 1 e 2 - Variáveis.
    char carta_1_estado, carta_2_estado;
    char carta_1_codigo[4], carta_2_codigo[4];
    char carta_1_cidade[31], carta_2_cidade[31];
    int carta_1_populacao, carta_1_pontos_turisticos, carta_2_populacao, carta_2_pontos_turisticos;
    float carta_1_pib, carta_1_area, carta_2_pib, carta_2_area;
    float carta_1_densidade_populacional, carta_2_densidade_populacional;
    float carta_1_pib_per_capita, carta_2_pib_per_capita;

    // Coletando dados da carta 1.
    printf("Preencha abaixo as informações da Carta 1.\n\n");
    printf("Digite o estado: ");
    scanf("%c", &carta_1_estado);
    getchar(); // utilizado para limpar o \n deixado no buffer do scanf.

    printf("Digite o código do estado: ");
    scanf("%s", carta_1_codigo);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(carta_1_cidade, 31, stdin);
    carta_1_cidade[strcspn(carta_1_cidade, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &carta_1_populacao);
    getchar();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta_1_area);
    getchar();

    printf("Digite o PIB do estado: ");
    scanf("%f", &carta_1_pib);
    getchar();

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &carta_1_pontos_turisticos);
    getchar();

    // Variáveis definidas pós inputs.
    carta_1_densidade_populacional = calcular_densidade_populacional(carta_1_populacao, carta_1_area);
    carta_1_pib_per_capita = calcular_pib_per_capita(carta_1_populacao, carta_1_pib);

    // Mostrando as informações da carta 1.
    printf("\n\n-------------------------------------\n");
    printf("Informações da carta\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta_1_estado);
    printf("Código: %s\n", carta_1_codigo);
    printf("Nome da Cidade: %s\n", carta_1_cidade);
    printf("População: %d\n", carta_1_populacao);
    printf("Área: %.2f km²\n", carta_1_area);
    printf("PIB: %.2f bilhões de reais\n", carta_1_pib);
    printf("Número de Pontos Turísticos: %d\n", carta_1_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta_1_densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta_1_pib_per_capita);

    // Coletando dados da carta 2.
    printf("\n\n-------------------------------------\n");
    printf("Preencha abaixo as informações da Carta 2.\n\nDigite o estado: ");
    scanf("%c", &carta_2_estado);
    getchar();

    printf("Digite o código do estado: ");
    scanf("%s", carta_2_codigo);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(carta_2_cidade, 30, stdin);
    carta_2_cidade[strcspn(carta_2_cidade, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &carta_2_populacao);
    getchar();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &carta_2_area);
    getchar();

    printf("Digite o PIB do estado: ");
    scanf("%f", &carta_2_pib);
    getchar();

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &carta_2_pontos_turisticos);
    getchar();

    // Variáveis definidas pós inputs.
    carta_2_densidade_populacional = calcular_densidade_populacional(carta_2_populacao, carta_2_area);
    carta_2_pib_per_capita = calcular_pib_per_capita(carta_2_populacao, carta_2_pib);

    // Mostrando as informações da carta 2.
    printf("\n\n-------------------------------------\n");
    printf("Informações da carta\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", carta_2_estado);
    printf("Código: %s\n", carta_2_codigo);
    printf("Nome da Cidade: %s\n", carta_2_cidade);
    printf("População: %d\n", carta_2_populacao);
    printf("Área: %.2f km²\n", carta_2_area);
    printf("PIB: %.2f bilhões de reais\n", carta_2_pib);
    printf("Número de Pontos Turísticos: %d\n", carta_2_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta_2_densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta_2_pib_per_capita);

    return 0;
}
