#include <stdio.h>

int main() {

    // Variaveis da cidade
    char codi1[4], codi2[4], nome1[21], nome2[21]; // Código da cidade, Nome da cidade
    int popu1, popu2, pont1, pont2; // A população da cidade, O numero de Pontos Turísticos da cidade
    float area1, area2, pib1, pib2; // A area em Km² da cidade, PIB da cidade

    // Variaveis para resultado de calculos
    float dens1, dens2, pibp1, pibp2; // Densidade populacional, PIB per Capita


    // A fase de cadastramento da cidade 1
    printf("Cadastro de cartas do jogo Super Trunfo\n\n");

    printf("Insira o código da cidade 1.\n");
    scanf("%s", &codi1);

    printf("Insira o nome da cidade 1.\n");
    scanf("%s", &nome1);

    printf("Insira a população da cidade 1.\n");
    scanf("%d", &popu1);

    printf("Insira a área em km quadrado da cidade 1.\n");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade 1.\n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos da cidade 1.\n");
    scanf("%d", &pont1);

    // A fase de cadastramento da cidade 2
    printf("\nInsira o código da cidade 2.\n");
    scanf("%s", &codi2);

    printf("Insira o nome da cidade 2.\n");
    scanf("%s", &nome2);

    printf("Insira a população da cidade 2.\n");
    scanf("%d", &popu2);

    printf("Insira a área em km quadrado da cidade 2.\n");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade 2.\n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos da cidade 2.\n");
    scanf("%d", &pont2);



    // Calculo de variaveis
    dens1 = popu1 / area1; // Habitante por Km²
    dens2 = popu2 / area2;
    pibp1 = pib1 / popu1; // PIB por habitante
    pibp2 = pib2 / popu2;

    // A fase de exibição de dados das cidades cadastradas
    printf("\nCarta 1:\n");
    printf("O código da cidade: %s\n", codi1);
    printf("O nome da cidade: %s\n", nome1);
    printf("A população da cidade: %d\n", popu1);
    printf("A área da cidade: %.2fKm²\n", area1);
    printf("O PIB da cidade: R$%.2f\n", pib1);
    printf("A quantidade de pontos turísticos da cidade: %d\n", pont1);
    printf("A Densidade populacional da cidade: %.2f por Km²\n", dens1);
    printf("O PIB per capita da cidade: R$%.2f\n", pibp1);

    printf("\nCarta 2:\n");
    printf("O código da cidade: %s\n", codi2);
    printf("O nome da cidade: %s\n", nome2);
    printf("A população da cidade: %d\n", popu2);
    printf("A área da cidade: %.2fKm²\n", area2);
    printf("O PIB da cidade: R$%.2f\n", pib2);
    printf("A quantidade de pontos turísticos da cidade: %d\n", pont2);
    printf("A Densidade populacional da cidade: %.2f por Km²\n", dens2);
    printf("O PIB per capita da cidade: R$%.2f\n", pibp2);

    return 0;
}