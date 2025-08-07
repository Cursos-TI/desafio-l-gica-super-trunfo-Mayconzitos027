// Desafio aventureiro do jogo Super Trunfo.
// Nesse desafio tenho : implementar menu interativo para a escolha de atributo de comparação;
// Usar estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa.
#include <stdio.h>
#include <string.h>

int main()
{
    // Sistema para cadastramento de cartas com informações das cidades para o jogo Super Trunfo

    // Variável para escolha do atributo
    int escolhaJogador;

    // Variáveis para Carta 1
    char letra1;
    char codigo1[4];
    char pais1[50];
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float PIB1;
    float densidade_populacional1;  // (população / área)
    double PIB_percapita1;          // (PIB / população)
    
    // Variáveis para Carta 2
    char letra2;
    char codigo2[4];
    char pais2[50];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float PIB2;
    float densidade_populacional2;  // (população / área)
    double PIB_percapita2;          // (PIB / população)

    // Boa-vindas ao usuário
    printf(" * * * Olá, Jogador! Vamos cadastrar as informações de duas cartas do Super Trunfo. * * *\n\n");

    // Leitura da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Digite uma letra (de 'A' a 'H') para representar o País: ");
    scanf(" %c", &letra1);
    
    printf("Digite o número da carta (ex: 01): ");
    scanf("%s", codigo1);
    getchar();
   

    printf("Digite o nome do País: ");
    fgets(pais1, 50, stdin);
    pais1[strcspn(pais1, "\n")] = 0;

    printf("Digite o número de habitantes do País: ");
    scanf("%d", &populacao1);
   

    printf("Digite a área do País em km²: ");
    scanf("%f", &area1);
   

    printf("Digite o Produto Interno Bruto (PIB) do País em bilhões: ");
    scanf("%f", &PIB1);
   

    printf("Digite a quantidade de pontos turísticos do País: ");
    scanf("%d", &pontos_turisticos1);
      

    // Cálculos após leitura
    densidade_populacional1 = populacao1 / area1;
    PIB_percapita1 = (PIB1 * 1000000000) / populacao1;

    printf("\nParabéns! Você terminou sua primeira carta Super Trunfo!\n");

    // Leitura da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Digite uma letra (de 'A' a 'H') para representar o País: ");
    scanf(" %c", &letra2);
   

    printf("Digite o número da carta (ex: 01): ");
    scanf("%s", codigo2);
    getchar();
  

    printf("Digite o nome do País: ");
    fgets(pais2, 50, stdin);
    pais2[strcspn(pais2, "\n")] = 0;

    printf("Digite o número de habitantes do País: ");
    scanf("%d", &populacao2);
   

    printf("Digite a área do País em km²: ");
    scanf("%f", &area2);
    

    printf("Digite o Produto Interno Bruto (PIB) do País em bilhões: ");
    scanf("%f", &PIB2);
    

    printf("Digite a quantidade de pontos turísticos do País: ");
    scanf("%d", &pontos_turisticos2);
      

    // Cálculos após leitura
    densidade_populacional2 = populacao2 / area2;
    PIB_percapita2 = (PIB2 * 1000000000) / populacao2;

    printf("\nParabéns! Aqui estão suas cartas Super Trunfo!\n\n");

    // Exibição da Carta 1
    printf("--- Informações da Carta 1 ---\n");
    printf("País: %c\n", letra1);
    printf("Código: %c%s\n", letra1, codigo1);
    printf("Nome do País: %s\n", pais1);
    printf("População: %d milhões de habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.0f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", PIB_percapita1);

    // Exibição da Carta 2
    printf("\n--- Informações da Carta 2 ---\n");
    printf("País: %c\n", letra2);
    printf("Código: %c%s\n", letra2, codigo2);
    printf("Nome do País: %s\n", pais2);
    printf("População: %d milhões de habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.0f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", PIB_percapita2);

    // Menu interativo para escolha do atributo
    printf("\n\n*** Vamos comparar as cartas e determinar a vencedora! Preparado? ***\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolhaJogador);
 
    // Comparação com switch e decisões aninhadas
    printf("\n");
    switch (escolhaJogador) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("--- %s (%c%s): %d ---\n", pais1, letra1, codigo1, populacao1);
            printf("--- %s (%c%s): %d ---\n", pais2, letra2, codigo2, populacao2);
            if (populacao1 > populacao2) {
                printf("Super Trunfo! %s venceu com %d habitantes a mais!\n", pais1, populacao1 - populacao2);
            } else if (populacao2 > populacao1) {
                printf("Super Trunfo! %s venceu com %d habitantes a mais!\n", pais2, populacao2 - populacao1);
            } else {
                printf("Super Trunfo! Incrível, teve um empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("--- %s (%c%s): %.2f km² ---\n", pais1, letra1, codigo1, area1);
            printf("--- %s (%c%s): %.2f km² ---\n", pais2, letra2, codigo2, area2);
            if (area1 > area2) {
                printf("Super Trunfo! %s venceu com %.2f km² a mais!\n", pais1, area1 - area2);
            } else if (area2 > area1) {
                printf("Super Trunfo! %s venceu com %.2f km² a mais!\n", pais2, area2 - area1);
            } else {
                printf("Super Trunfo! Incrível, teve um empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("--- %s (%c%s): %.2f bilhões ---\n", pais1, letra1, codigo1, PIB1);
            printf("--- %s (%c%s): %.2f bilhões ---\n", pais2, letra2, codigo2, PIB2);
            if (PIB1 > PIB2)
            {
                printf("Super Trunfo! %s venceu com %.2f bilhões a mais!\n", pais1, PIB1 - PIB2);
            } else if (PIB2 > PIB1) {
                printf("Super Trunfo! %s venceu com %.2f bilhões a mais!\n", pais2, PIB2 - PIB1);
            } else {
                printf("Super Trunfo! Incrível, teve um empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            printf("--- %s (%c%s): %d ---\n", pais1, letra1, codigo1, pontos_turisticos1);
            printf("--- %s (%c%s): %d ---\n", pais2, letra2, codigo2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Super Trunfo! %s venceu com %d pontos a mais!\n", pais1, pontos_turisticos1 - pontos_turisticos2);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Super Trunfo! %s venceu com %d pontos a mais!\n", pais2, pontos_turisticos2 - pontos_turisticos1);
            } else {
                printf("Super Trunfo! Incrível, teve um empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("--- %s (%c%s): %.0f hab/km² ---\n", pais1, letra1, codigo1, densidade_populacional1);
            printf("--- %s (%c%s): %.0f hab/km² ---\n", pais2, letra2, codigo2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) { // Menor vence
                printf("Super Trunfo! %s venceu com %.0f hab/km² a menos!\n", pais1, densidade_populacional2 - densidade_populacional1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("Super Trunfo! %s venceu com %.0f hab/km² a menos!\n", pais2, densidade_populacional1 - densidade_populacional2);
            } else {
                printf("Super Trunfo! Incrível, teve um empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Escolha entre 1 e 5.\n");
            return 1;
    }

    printf("\n==== Continue jogando Super Trunfo e conquiste o mundo! ====\n");

    return 0;
}