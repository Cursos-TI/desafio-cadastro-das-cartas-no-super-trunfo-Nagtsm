#include <stdio.h>

int main()
{

    char estado[2];
    char codigo[5];
    char cidade[20];
    char estado2[2];
    char codigo2[5];
    char cidade2[20];
    unsigned long int habitantes, turisticos, habitantes2, turisticos2;
    float km, pib, km2, pib2, densidade, capital, area, densidade2, capital2, area2, SuperPoder1, SuperPoder2;
    // em cidade eu nao consegui arrumar um jeito de colocar SAO PAULO (exemplo) com espaço sem bugar, tem que ser SAOPAULO junto.

    // Entrada de dados para a carta 1
    printf("\n%40s\n", "Carta 1\n"); // esses 40s é pra ter espaço pra carta 1 fica no meio, é decorativo.
    printf("Insira a inicial do estado: ");
    scanf("%s", estado);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);

    printf("Insira o código da carta: ");
    scanf("%s", codigo);

    printf("insira a quantidade de habitantes:");
    scanf("%lu", &habitantes);

    printf("insira a area:");
    scanf("%f", &area);

    printf("insira a quantidade de pontos turisticos:");
    scanf("%lu", &turisticos);

    printf("insira a área (em km²):");
    scanf("%f", &km);

    printf("insira o Pib:");
    scanf("%f", &pib);

    // Entrada de dados para a carta 2
    printf("\n%40s\n", "Segunda carta\n");

    printf("Insira a inicial do estado: ");
    scanf("%s", estado2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Insira o código da carta: ");
    scanf("%s", codigo2);

    printf("insira a quantidade de habitantes:");
    scanf("%lu", &habitantes2);

    printf("insira a area2:");
    scanf("%f", &area2);

    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%lu", &turisticos2);

    printf("Insira a área (em km²): ");
    scanf("%f", &km2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);
    // CALCULOS

    densidade = (float)(area + habitantes) / 2;
    densidade2 = (float)(area2 + habitantes2) / 2;

    capital = (float)(pib + habitantes) / 2;
    capital2 = (float)(pib2 + habitantes2) / 2;

    SuperPoder1 = (float)(habitantes + area + pib + turisticos + capital + (1 / densidade));
    SuperPoder2 = (float)(habitantes2 + area2 + pib2 + turisticos2 + capital2 + (1 / densidade2));

    // RESULTADO

    printf("\n%40s\n", "Dados Da Carta 1\n");
    printf("Super Poder:%.2f", SuperPoder1);
    printf("\nEstado:%s\nCidade:%s\nCódigo:%s\nhabitantes:%lu\npontos turisticos:%lu\nkm:%.2f\nPib:%.2f\narea:%.2f\ndensidade:%.2f\ncapital:%.2f\n", estado, cidade, codigo, habitantes, turisticos, km, pib, area, densidade, capital);

    printf("\n%40s\n", "Dados Da Carta 2\n");
    printf("Super Poder:%.2f", SuperPoder2);
    printf("\nEstado:%s\nCidade:%s\nCódigo:%s\nHabitantes:%lu\nPontos turísticos:%lu\nkm:%.2f\npib:%.2f\narea:%.2f\ndensidade:%.2f\ncapital:%.2f\n", estado2, cidade2, codigo2, habitantes2, turisticos2, km2, pib2, area2, densidade2, capital2);

    // Comparação de habitantes
    if (habitantes > habitantes2)
    {
        printf("\nHabitantes: Carta 1 Venceu! (%lu)\nCarta 2(%lu)\n", habitantes, habitantes2);
    }
    else if (habitantes < habitantes2)
    {
        printf("\nHabitantes: Carta 2 Venceu! (%lu)\nCarta 1(%lu)\n", habitantes2, habitantes);
    }
    // Comparação de pontos turísticos
    if (turisticos > turisticos2)
    {
        printf("Pontos Turisticos: Carta 1 Venceu! (%lu)\nCarta 2(%lu)\n", turisticos, turisticos2);
    }
    else if (turisticos < turisticos2)
    {
        printf("Pontos Turisticos: Carta 2 Venceu! (%lu)\nCarta 1(%lu)\n", turisticos2, turisticos);
    }
    // Comparação de PIB
    if (pib > pib2)
    {
        printf("PIB: Carta 1 Venceu! (%.2f)\nCarta 2(%.2f)\n", pib, pib2);
    }
    else if (pib < pib2)
    {
        printf("PIB: Carta 2 Venceu! (%.2f)\nCarta 1(%.2f)\n", pib2, pib);
    }
    // Comparação de área
    if (area > area2)
    {
        printf("Area: Carta 1 Venceu! (%.2f)\nCarta 2(%.2f)\n", area, area2);
    }
    else if (area < area2)
    {
        printf("Area: Carta 2 Venceu! (%.2f)\nCarta 1(%.2f)\n", area2, area);
    }
    // Comparação de Capital
    if (capital > capital2)
    {
        printf("Capital: Carta 1 Venceu! (%.2f)\nCarta 2 (%.2f)\n", capital, capital2);
    }
    else if (area < area2)
    {
        printf("Capital: Carta 2 Venceu! (%.2f)\nCarta 1 (%.2f)\n", capital2, capital);
    }
    // Comparação de densidade
    if (densidade < densidade2)
    {
        printf("A densidade da carta 1 venceu! (%.2f)\nCarta 2(%.2f)\n", densidade, densidade2);
    }
    else if (densidade > densidade2)
    {
        printf("A densidade da carta 2 venceu! (%.2f)\nCarta 1(%.2f)\n", densidade2, densidade);
    }
    // Super poder resultado
    if (SuperPoder1 > SuperPoder2)
    {
        printf("Super Poder da carta 1 venceu! (%.2f)\nCarta 2 (%.2f)", SuperPoder1, SuperPoder2);
    }
    else if (SuperPoder1 < SuperPoder2)
    {
        printf("Super Poder da carta 2 Venceu! (%.2f)\nCarta 1 (%.2f)", SuperPoder2, SuperPoder1);
    }
    else
    {
        printf("Empate!\n");
    }
    return 0;
}
