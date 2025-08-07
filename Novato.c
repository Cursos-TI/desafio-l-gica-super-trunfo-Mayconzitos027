/*Nesse teste tenho que implementar a lógica para comparar
duas cartas e determinar a vencedora.*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Sistema para cadastramento de cartas com informações das cidades para o jogo Super Trunfo

    // Variáveis para Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float PIB1;
    float densidade_populacional1; // (população / área)
    double PIB_percapita1;         // (PIB / população)

    // Variáveis para Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float PIB2;
    float densidade_populacional2; // (população / área)
    double PIB_percapita2;         // (PIB / população)

    // Boa-vindas ao usuário
    printf(" * * * Olá, Jogador! Vamos cadastrar as informações de duas cartas do Super Trunfo. * * *\n\n");

    // Leitura da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Digite uma letra (de 'A' a 'H') para representar o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o número da carta (um número entre 01 e 04): "); // Solicitado apenas número pois será conectado no printf com a letra do estado
    scanf("%s", codigo1);
    getchar();

    printf("Digite o nome da cidade escolhida: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;

    PIB_percapita1 = (PIB1 * 1000000000) / populacao1; // Converte PIB de bilhões pra reais antes de dividir

    // Fim da primeira Carta

    printf("\n\n Parabéns!! Você terminou sua primeira carta Super Trunfo!");

    printf("\n\n Agora vamos para a segunda carta.\n \n");

    // Leitura da Carta 2
    printf("--- Carta 2 ---\n");
    printf("Digite uma letra (de 'A' a 'H') para representar o Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o número da carta (um número entre 01 e 04): "); // Solicitado apenas número pois será conectado no printf com a letra do estado
    scanf("%s", codigo2);
    getchar();

    printf("Digite o nome da cidade escolhida: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto (PIB) da cidade em bilhões: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísticos dessa cidade: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;

    PIB_percapita2 = (PIB2 * 1000000000) / populacao2; // Converte PIB de bilhões pra reais antes de dividir

    // Fim da segunda Carta

    printf("\n\nParabéns!! Aqui estão suas cartas Super Trunfo! \n\n");

    // Exibição da Carta1
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1); // Código conectado conforme comentado a cima.
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Números de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.0f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", PIB_percapita1);

    // Exibição da Carta 2
    printf("\n--- Informações da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2); // Código conectado conforme comentado a cima.
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Números de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.0f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", PIB_percapita2);

    // Comparação para determinar a carta vencedora usando o atributo PIB per capita
    printf("\n\n*** Vamos comparar as cartas e determinar a vencedora! Preparado? ***\n");
    printf("\n      O atributo escolhido foi...\n");
    printf("      PIB per capita. Boa sorte!\n");
    printf("\n--- Carta 1 - %s (%c%s): %.2f ---\n", cidade1, estado1, codigo1, PIB_percapita1);
    printf("--- Carta 2 - %s (%c%s): %.2f ---\n", cidade2, estado2, codigo2, PIB_percapita2);

    if (PIB_percapita1 > PIB_percapita2)
    {
        printf("\n Super Trunfo! A Carta 1 - %s venceu com a diferença de R$ %.2f!", cidade1, PIB_percapita1 - PIB_percapita2);
    }
    else if (PIB_percapita1 < PIB_percapita2)
    {
        printf("\n Super Trunfo! A Carta 2 - %s venceu com a diferença de R$ %.2f!", cidade2, PIB_percapita2 - PIB_percapita1);
    }
    else
    {
        printf("Super Trunfo! Incrível, teve um empate!");
    }

    printf("\n\n ==== Continue jogando Super Trunfo e conquiste o mundo! ====\n\n");

    return 0;
}