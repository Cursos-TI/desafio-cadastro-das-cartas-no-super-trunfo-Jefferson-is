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

    printf("Informe o nome do estado:\n");
    scanf("%s", estado);

    printf("Informe o código da cidade:\n");
    scanf("%s", codigo);

    printf("Informe o nome da cidade:\n");
    scanf("%s", cidade);

    printf("Informe a população:\n");
    scanf("%d", &populacao);

    printf("Informe a área:\n");
    scanf("%f", &area);

    printf("Informe o PIB:\n");
    scanf("%f", &pib);

    printf("Informe os números pontos turísticos:\n");
    scanf("%d", &pontosturisticos);

    // Cálculos
    densidadepopulacional = populacao / area;
    pibpercapta = pib / populacao;

    // Dados a Serem Exibidos
    printf(" Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n", estado, codigo, cidade, populacao);
    printf(" Área: %.2f m²\n PIB: R$%f\n Pontos turísticos: %d\n", area, pib, pontosturisticos);
    printf(" Densidade populacional: %.2f hab./km²\n PIB per capita: R$%.2f\n", densidadepopulacional, pibpercapta);

    return 0;
}