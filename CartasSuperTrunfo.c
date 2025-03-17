#include <stdio.h>
#include <stdlib.h> // Biblioteca para rand e srand
#include <time.h>   // Biblioteca para time

int main()
{
    char país[20], estado[2], codigo[5], cidade[20];
    char país2[20], estado2[2], codigo2[5], cidade2[20];
    unsigned long int populacao, turisticos, populacao2, turisticos2;
    float km, pib, km2, pib2, densidade, capital, area, densidade2, capital2, area2, SuperPoder1, SuperPoder2;
    int escolha1, escolha2, resultado1, resultado2;

    // Entrada de dados para a carta 1

    printf("\n%40s\n", "Carta 1\n");
    printf("Escolha o País: ");
    scanf("%s", país);
    printf("Insira a inicial do estado: ");
    scanf("%s", estado);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    printf("Insira o código da carta: ");
    scanf("%s", codigo);
    printf("insira a população:");
    scanf("%lu", &populacao);
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
    printf("Escolha o País: ");
    scanf("%s", país2);
    printf("Insira a inicial do estado: ");
    scanf("%s", estado2);
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Insira o código da carta: ");
    scanf("%s", codigo2);
    printf("insira a população:");
    scanf("%lu", &populacao2);
    printf("insira a area2:");
    scanf("%f", &area2);
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%lu", &turisticos2);
    printf("Insira a área (em km²): ");
    scanf("%f", &km2);
    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    // CALCULOS

    densidade = (float)(area + populacao) / 2;
    densidade2 = (float)(area2 + populacao2) / 2;
    capital = (float)(pib + populacao) / 2;
    capital2 = (float)(pib2 + populacao2) / 2;
    SuperPoder1 = (float)(populacao + area + pib + turisticos + capital - densidade);
    SuperPoder2 = (float)(populacao2 + area2 + pib2 + turisticos2 + capital2 - densidade);

    // RESULTADO

    printf("\n%40s\n", "###Dados Da Carta 1###\n");
    printf("Super Poder:%.2f", SuperPoder1);
    printf("\nPaís:%s\nEstado:%s\nCidade:%s\nCódigo:%s\nPopulação:%lu\nPontos turisticos:%lu\nKm:%.2f\nPib:%.2f\nÁrea:%.2f\nDensidade:%.2f\nCapital:%.2f\n", país, estado, cidade, codigo, populacao, turisticos, km, pib, area, densidade, capital);

    printf("\n%40s\n", "###Dados Da Carta 2###\n");
    printf("Super Poder:%.2f", SuperPoder2);
    printf("\nPaís:%s\nEstado:%s\nCidade:%s\nCódigo:%s\nPopulação:%lu\nPontos turísticos:%lu\nKm:%.2f\nPib:%.2f\nÁrea:%.2f\nDensidade:%.2f\nCapital:%.2f\n", país2, estado2, cidade2, codigo2, populacao2, turisticos2, km2, pib2, area2, densidade2, capital2);

    // Area de escolha do jogador para comparar cartas

    printf("\n%40s\n", "***Escolha o atributos da primeira carta***\n");
    printf("1 População\n");
    printf("2 Area\n");
    printf("3 Pib\n");
    printf("4 Pontos turisticos\n");
    printf("5 Densidade\n");
    printf("6 Super Poder\n");
    printf("5 Capital\n");
    printf("Escolha:");
    scanf("%d", &escolha1);
    printf("\n%40s\n");

    switch (escolha1)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("Carta 1 tem a população maior: %d\n", populacao);
            resultado1 = 1;
        }
        else if (populacao2 > populacao)
        {
            printf("Carta 2 tem a população maior: %d\n", populacao2);
            resultado2 = 1;
        }
        break;

    case 2:
        if (area > area2)
        {
            printf("Carta 1 tem a área maior: %.2f\n", area);
            resultado1 = 1;
        }
        else if (area2 > area)
        {
            printf("Carta 2 tem a área maior: %.2f\n", area2);
            resultado2 = 1;
        }
        break;

    case 3:
        if (pib > pib2)
        {
            printf("Carta 1 tem o PIB maior: %.2f\n", pib);
            resultado1 = 1;
        }
        else if (pib2 > pib)
        {
            printf("Carta 2 tem o PIB maior: %.2f\n", pib2);
            resultado2 = 1;
        }
        break;

    case 4:
        if (turisticos > turisticos2)
        {
            printf("Carta 1 tem mais pontos turísticos: %d\n", turisticos);
            resultado1 = 1;
        }
        else if (turisticos2 > turisticos)
        {
            printf("Carta 2 tem mais pontos turísticos: %d\n", turisticos2);
            resultado2 = 1;
        }
        break;

    case 5:
        if (densidade < densidade2)
        {
            printf("Carta 1 tem a densidade menor: %.2f\n", densidade);
            resultado1 = 1;
        }
        else if (densidade2 < densidade)
        {
            printf("Carta 2 tem a densidade menor: %.2f\n", densidade2);
            resultado2 = 1;
        }
        break;
    case 6:
        if (SuperPoder1 > SuperPoder2)
        {
            printf("Carta 1 tem Super Poder maior: %.2f\n", SuperPoder1);
            resultado1 = 1;
        }
        else if (SuperPoder2 > SuperPoder1)
        {
            printf("Carta 2 tem Super Poder maior: %.2f\n", SuperPoder2);
            resultado2 = 1;
        }
        break;
    case 7:
        if (capital < capital2)
        {
            printf("Carta 1 tem a capital maior: %.2f\n", capital);
            resultado1 = 1;
        }
        else if (capital2 < capital)
        {
            printf("Carta 2 tem a capital maior: %.2f\n", capital2);
            resultado2 = 1;
        }
        break;

    default:
        printf("Opção inválida\n");
    }

    printf("\n%40s\n", "***Escolha o atributos da segunda carta (não escolha atributo repetido***\n");
    printf("1 População\n");
    printf("2 Area\n");
    printf("3 Pib\n");
    printf("4 Pontos turisticos\n");
    printf("5 Densidade\n");
    printf("6 Super Poder\n");
    printf("5 Capital\n");
    printf("Escolha:");
    scanf("%d", &escolha2);
    printf("\n%40s\n");

    if (escolha1 == escolha2)
    {
        printf("Você escolheu o mesmo atributo. Escolha outro.\n");
    }

    switch (escolha2)
    {
    case 1:
        if (populacao2 > populacao)
        {
            printf("Carta 2 tem a população maior: %d\n", populacao2);
            resultado2 += 1;
        }
        else if (populacao > populacao2)
        {
            printf("Carta 1 tem a população maior: %d\n", populacao);
            resultado1 += 1;
        }
        break;

    case 2:
        if (area2 > area)
        {
            printf("Carta 2 tem a área maior: %.2f\n", area2);
            resultado2 += 1;
        }
        else if (area > area2)
        {
            printf("Carta 1 tem a área maior: %.2f\n", area);
            resultado1 += 1;
        }
        break;

    case 3:
        if (pib2 > pib)
        {
            printf("Carta 2 tem o PIB maior: %.2f\n", pib2);
            resultado2 += 1;
        }
        else if (pib > pib2)
        {
            printf("Carta 1 tem o PIB maior: %.2f\n", pib);
            resultado1 += 1;
        }
        break;

    case 4:
        if (turisticos2 > turisticos)
        {
            printf("Carta 2 tem mais pontos turísticos: %d\n", turisticos2);
            resultado2 += 1;
        }
        else if (turisticos > turisticos2)
        {
            printf("Carta 1 tem mais pontos turísticos: %d\n", turisticos);
            resultado1 += 1;
        }
        break;

    case 5:
        if (densidade2 < densidade)
        {
            printf("Carta 2 tem a densidade menor: %.2f\n", densidade2);
            resultado2 += 1;
        }
        else if (densidade < densidade2)
        {
            printf("Carta 1 tem a densidade menor: %.2f\n", densidade);
            resultado1 += 1;
        }
        break;
    case 6:
        if (SuperPoder2 > SuperPoder1)
        {
            printf("Carta 2 tem Super Poder maior: %.2f\n", SuperPoder2);
            resultado1 = 1;
        }
        else if (SuperPoder1 > SuperPoder2)
        {
            printf("Carta 1 tem Super Poder maior: %.2f\n", SuperPoder1);
            resultado2 = 1;
        }
        break;
    case 7:
        if (capital2 < capital)
        {
            printf("Carta 2 tem a capital maior: %.2f\n", capital2);
            resultado1 = 1;
        }
        else if (capital < capital2)
        {
            printf("Carta 1 tem a capital maior: %.2f\n", capital);
            resultado2 = 1;
        }
        break;

    default:
        printf("Opção inválida\n");
    }
    printf("\n%40s\n"
           "###RESULTADOS###");

    if (resultado1 > resultado2)
    {
        printf("Jogador 1 Venceu!\nPaís escolhido:%s\nInicial do Estado:%s\nResultado:%d\nResultado Jogador2:%d", país, estado, resultado1, resultado2);
    }
    else if (resultado2 > resultado1)
    {
        printf("Jogador 2 Venceu!\nPaís escolhido:%s\nInicial do Estado:%s\nResultado:%d\nResultado Jogador1:%d", país2, estado2, resultado2, resultado1);
    }
    else
    {
        printf("empate!");
    }
    return 0;
}
