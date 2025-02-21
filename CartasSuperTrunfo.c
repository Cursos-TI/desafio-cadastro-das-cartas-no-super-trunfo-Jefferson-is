#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo - Países \n");
  

    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapta;

    printf("Carta 1\n");
    printf("Informe o estado:\n");
    scanf("%s", &estado);

    printf("Informe o código da cidade:\n");
    scanf("%s", &codigo);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Informe a população:\n");
    scanf("%d", &populacao);

    printf("Informe a área:\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &pib);

    printf("Informe os números de pontos turísticos:\n");
    scanf("%d", &pontosturisticos);

    // Cálculos
    densidadepopulacional = populacao / area;
    pibpercapta = pib * 1000000000 / populacao;

    // Dados a Serem Exibidos
    printf("Carta 1\n");
    printf(" Estado: %s\n Código da cidade: %s\n Nome da cidade: %s\n População: %d\n", estado, codigo, cidade, populacao);
    printf(" Área: %.2f km²\n PIB: R$%.2f Bilhoes de reais\n Pontos turísticos: %d\n", area, pib, pontosturisticos);
    printf(" Densidade populacional: %.2f hab/km²\n Pib per capita: R$%.2f reais\n", densidadepopulacional, pibpercapta);

    printf("Carta 2\n");
    printf("Informe o estado:\n");
    scanf("%s", &estado);

    printf("Informe o código da cidade:\n");
    scanf("%s", &codigo);

    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Informe a população:\n");
    scanf("%d", &populacao);

    printf("Informe a área:\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &pib);

    printf("Informe os números pontos de turísticos:\n");
    scanf("%d", &pontosturisticos);

    // Cálculos
    densidadepopulacional = populacao / area;
    pibpercapta = pib * 1000000000 / populacao;
    
    // Dados a Serem Exibidos
    printf("Carta 2\n");
    printf(" Estado: %s\n Código da cidade: %s\n Nome da cidade: %s\n População: %d\n", estado, codigo, cidade, populacao);
    printf(" Área: %.2f km²\n PIB: R$%.2f Bilhoes de reais\n Pontos turísticos: %d\n", area, pib, pontosturisticos);
    printf(" Densidade populacional: %.2f hab/km²\n Pib per capita: R$%.2f reais\n", densidadepopulacional, pibpercapta);

    return 0;
}