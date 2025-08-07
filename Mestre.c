// Desafio mestre do jogo Super Trunfo.
// Nesse desafio tenho : implementar a escolha de dois atributos, coparação com múltiuplos atributos, soma dos atributos, tratamento de empates, menus dinâmicos (impedindo a escolha de atributos iguais).
// Usar if else, switch e ternários mantendo os requisitos.
#include <stdio.h>
#include <string.h>

int main()
{
    // Sistema para cadastramento de cartas com informações das cidades para o jogo Super Trunfo

    // Variável para escolha dos atributos
    int escolhaAtributo1, escolhaAtributo2;

    float valor1_atributo1, valor2_atributo1, valor1_atributo2, valor2_atributo2; // valores dos atributos para comparação
    float soma_atributo1, soma_atributo2; // valores das somas dos atributos para definir o ganhador

    // Variáveis para Carta 1
    char letra1;
    char codigo1[4];
    char pais1[50];
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float PIB1;
    float densidade_populacional1; // (população / área)
    double PIB_percapita1;         // (PIB / população)

    // Variáveis para Carta 2
    char letra2;
    char codigo2[4];
    char pais2[50];
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
    printf("População: %d habitantes\n", populacao1);
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
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.0f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", PIB_percapita2);

    // Menu interativo para escolha dos atributos

    // Menu para escolha do primeiro atributo
    printf("\n\n*** Vamos comparar as cartas e determinar a vencedora! Preparado? ***\n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");
    scanf("%d", &escolhaAtributo1);

    // Menu para escolha do segundo atributo
    // Usando o ternario para verificar a escolha anterior e exibir apenas as escolhas.
    printf("\nEscolha o segundo atributo para comparação diferente da primeira escolha:\n");
    escolhaAtributo1 != 1 ? printf("1. População\n") : 0;
    escolhaAtributo1 != 2 ? printf("2. Área\n") : 0;
    escolhaAtributo1 != 3 ? printf("3. PIB\n") : 0;
    escolhaAtributo1 != 4 ? printf("4. Número de Pontos Turísticos\n") : 0;
    escolhaAtributo1 != 5 ? printf("5. Densidade Demográfica\n") : 0;
    printf("Digite sua escolha (1-5): ");
    scanf ("%d", &escolhaAtributo2);
    if (escolhaAtributo1 == escolhaAtributo2)
    {
        printf("\nEscolha um atributo diferente do anterior. Tente novamente: ");
        scanf ("%d", &escolhaAtributo2);
    }
    printf("Os atributos escolhidos foram: %d e %d", escolhaAtributo1 , escolhaAtributo2);
   
    // Comparação do primeiro atributo com switch e decisões aninhadas
  

    printf("\n");
    switch (escolhaAtributo1)
    {
    case 1: // População
        valor1_atributo1 = populacao1;
        valor2_atributo1 = populacao2;
        printf("Primeiro atributo escolhido: População\n");
        printf("--- %s (%c%s): %d ---\n", pais1, letra1, codigo1, populacao1);
        printf("--- %s (%c%s): %d ---\n", pais2, letra2, codigo2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("%s venceu com %d habitantes a mais!\n", pais1, populacao1 - populacao2);
        }
        else if (populacao2 > populacao1)
        {
            printf("%s venceu com %d habitantes a mais!\n", pais2, populacao2 - populacao1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 2: // Área
        valor1_atributo1 = area1;
        valor2_atributo1 = area2;
        printf("Primeiro atributo escolhido: Área\n");
        printf("--- %s (%c%s): %.2f km² ---\n", pais1, letra1, codigo1, area1);
        printf("--- %s (%c%s): %.2f km² ---\n", pais2, letra2, codigo2, area2);
        if (area1 > area2)
        {
            printf("%s venceu com %.2f km² a mais!\n", pais1, area1 - area2);
        }
        else if (area2 > area1)
        {
            printf("%s venceu com %.2f km² a mais!\n", pais2, area2 - area1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 3: //
        valor1_atributo1 = PIB1;
        valor2_atributo1 = PIB2;
        printf("Primeiro atributo escolhido: PIB\n");
        printf("--- %s (%c%s): %.2f bilhões ---\n", pais1, letra1, codigo1, PIB1);
        printf("--- %s (%c%s): %.2f bilhões ---\n", pais2, letra2, codigo2, PIB2);
        if (PIB1 > PIB2)
        {
            printf("%s venceu com %.2f bilhões a mais!\n", pais1, PIB1 - PIB2);
        }
        else if (PIB2 > PIB1)
        {
            printf("%s venceu com %.2f bilhões a mais!\n", pais2, PIB2 - PIB1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 4: // Pontos Turísticos
        valor1_atributo1 = pontos_turisticos1;
        valor2_atributo1 = pontos_turisticos2;
        printf("Primeiro atributo escolhido: Número de Pontos Turísticos\n");
        printf("--- %s (%c%s): %d ---\n", pais1, letra1, codigo1, pontos_turisticos1);
        printf("--- %s (%c%s): %d ---\n", pais2, letra2, codigo2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("%s venceu com %d pontos a mais!\n", pais1, pontos_turisticos1 - pontos_turisticos2);
        }
        else if (pontos_turisticos2 > pontos_turisticos1)
        {
            printf("%s venceu com %d pontos a mais!\n", pais2, pontos_turisticos2 - pontos_turisticos1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 5: // Densidade Demográfica (menor vence)
        valor1_atributo1 = densidade_populacional1;
        valor2_atributo1 = densidade_populacional2;
        printf("Primeiro atributo escolhido: Densidade Demográfica\n");
        printf("--- %s (%c%s): %.0f hab/km² ---\n", pais1, letra1, codigo1, densidade_populacional1);
        printf("--- %s (%c%s): %.0f hab/km² ---\n", pais2, letra2, codigo2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
        { // Menor vence
            printf("%s venceu com %.0f hab/km² a menos!\n", pais1, densidade_populacional2 - densidade_populacional1);
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
            printf("%s venceu com %.0f hab/km² a menos!\n", pais2, densidade_populacional1 - densidade_populacional2);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Escolha entre 1 e 5.\n");
        return 1;
    }

    // Comparação do segundo atributo com switch e decisões aninhadas
    
    printf("\n");
    switch (escolhaAtributo2)
    {
    case 1: // População
        valor1_atributo2 = populacao1;
        valor2_atributo2 = populacao2;
        printf("Segundo atributo escolhido: População\n");
        printf("--- %s (%c%s): %d ---\n", pais1, letra1, codigo1, populacao1);
        printf("--- %s (%c%s): %d ---\n", pais2, letra2, codigo2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("%s venceu com %d habitantes a mais!\n", pais1, populacao1 - populacao2);
        }
        else if (populacao2 > populacao1)
        {
            printf("%s venceu com %d habitantes a mais!\n", pais2, populacao2 - populacao1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 2: // Área
        valor1_atributo2 = area1;
        valor2_atributo2 = area2;
        printf("Segundo atributo escolhido: Área\n");
        printf("--- %s (%c%s): %.2f km² ---\n", pais1, letra1, codigo1, area1);
        printf("--- %s (%c%s): %.2f km² ---\n", pais2, letra2, codigo2, area2);
        if (area1 > area2)
        {
            printf("%s venceu com %.2f km² a mais!\n", pais1, area1 - area2);
        }
        else if (area2 > area1)
        {
            printf("%s venceu com %.2f km² a mais!\n", pais2, area2 - area1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 3: // PIB
        valor1_atributo2 = PIB1;
        valor2_atributo2 = PIB2;
        printf("Segundo atributo escolhido: PIB\n");
        printf("--- %s (%c%s): %.2f bilhões ---\n", pais1, letra1, codigo1, PIB1);
        printf("--- %s (%c%s): %.2f bilhões ---\n", pais2, letra2, codigo2, PIB2);
        if (PIB1 > PIB2)
        {
            printf("%s venceu com %.2f bilhões a mais!\n", pais1, PIB1 - PIB2);
        }
        else if (PIB2 > PIB1)
        {
            printf("%s venceu com %.2f bilhões a mais!\n", pais2, PIB2 - PIB1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 4: // Pontos Turísticos
        valor1_atributo2 = pontos_turisticos1;
        valor2_atributo2 = pontos_turisticos2;
        printf("Segundo atributo escolhido: Número de Pontos Turísticos\n");
        printf("--- %s (%c%s): %d ---\n", pais1, letra1, codigo1, pontos_turisticos1);
        printf("--- %s (%c%s): %d ---\n", pais2, letra2, codigo2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("%s venceu com %d pontos a mais!\n", pais1, pontos_turisticos1 - pontos_turisticos2);
        }
        else if (pontos_turisticos2 > pontos_turisticos1)
        {
            printf("%s venceu com %d pontos a mais!\n", pais2, pontos_turisticos2 - pontos_turisticos1);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    case 5: // Densidade Demográfica (menor vence)
        valor1_atributo2 = densidade_populacional1;
        valor2_atributo2 = densidade_populacional2;
        printf("Segundo atributo escolhido: Densidade Demográfica\n");
        printf("--- %s (%c%s): %.0f hab/km² ---\n", pais1, letra1, codigo1, densidade_populacional1);
        printf("--- %s (%c%s): %.0f hab/km² ---\n", pais2, letra2, codigo2, densidade_populacional2);
        if (densidade_populacional1 < densidade_populacional2)
        { // Menor vence
            printf("%s venceu com %.0f hab/km² a menos!\n", pais1, densidade_populacional2 - densidade_populacional1);
        }
        else if (densidade_populacional2 < densidade_populacional1)
        {
            printf("%s venceu com %.0f hab/km² a menos!\n", pais2, densidade_populacional1 - densidade_populacional2);
        }
        else
        {
            printf("Incrível, teve um empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Escolha entre 1 e 5.\n");
        return 1;
    }

    // Soma dos atributos para determinar o vencedor (densidade demográfica negativa pois o menor vence).
    soma_atributo1 = (escolhaAtributo1 == 5 ? - valor1_atributo1 : valor1_atributo1) + (escolhaAtributo2 == 5 ? - valor1_atributo2 : valor1_atributo2);

    soma_atributo2 = (escolhaAtributo1 == 5 ? -valor2_atributo1 : valor2_atributo1) + (escolhaAtributo2 == 5 ? -valor2_atributo2 : valor2_atributo2);

    printf("\n*** Agora veremos quem será vencedor da rodada somando os atributos escolhidos! ***\n");
    printf("\nQue rufem os tambores...\n");

    printf("\nSoma dos atributos:\n");
    printf("- %s: %.2f\n", pais1, soma_atributo1);
    printf("- %s: %.2f\n", pais2, soma_atributo2);

    // Determinar vencedor
    printf("\nResultado final: ");
    if (soma_atributo1 > soma_atributo2)
    {
        printf("Super Trunfo! %s venceu!\n", pais1);
    }
    else if (soma_atributo2 > soma_atributo1)
    {
        printf("Super Trunfo! %s venceu!\n", pais2);
    }
    else
    {
        printf("Incrível, teve um empate!\n");
    }

    printf("\n==== Continue jogando Super Trunfo e conquiste o mundo! ====\n");

    return 0;
}