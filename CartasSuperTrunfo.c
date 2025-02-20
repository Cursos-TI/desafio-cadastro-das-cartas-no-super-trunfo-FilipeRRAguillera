#include <stdio.h>

int main() {

    // Variaveis da cidade
    char codi[4], nome[21]; // Código da cidade, Nome da cidade
    int popu, pont; // A população da cidade, O numero de Pontos Turísticos da cidade
    float area, pib; // A area em Km² da cidade, PIB da cidade



    // A fase de cadastramento da cidade
    printf("Cadastro de cartas do jogo Super Trunfo\n\n");

    printf("Insira o código da cidade.\n");
    scanf("%s", &codi);

    printf("Insira o nome da cidade.\n");
    scanf("%s", &nome);

    printf("Insira a população da cidade.\n");
    scanf("%d", &popu);

    printf("Insira a área em km quadrado da cidade.\n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade.\n");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos da cidade.\n");
    scanf("%d", &pont);



    // A fase de exibição de dados da cidade cadastrada
    printf("\nO código da cidade: %s\n", codi);
    printf("O nome da cidade: %s\n", nome);
    printf("A população da cidade: %d\n", popu);
    printf("A área da cidade: %.2fKm²\n", area);
    printf("O PIB da cidade: R$%.2f\n", pib);
    printf("A quantidade de pontos turísticos da cidade: %d\n", pont);

    return 0;
}