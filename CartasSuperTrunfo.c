#include <stdio.h>

//teste Jefferson
int main() {
    printf("Desafio: Cadastro de Cartas no Super Trunfo - Países \n");

    char codigo[50];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Informe o código da cidade\n");
	scanf("%s", &codigo);

	printf("Informe o nome da cidade\n");
	scanf("%s", &nome);

	printf("Informe a população\n");
	scanf("%d", &populacao);

	printf("Informe a área\n");
	scanf(" %f", &area);

    printf("Informe o PIB\n");
	scanf("%f", &pib);

	printf("Informe os números de pontos turísticos\n");
	scanf("%d", &pontosturisticos);

    printf(" Código da cidade: %s\n Nome da cidade: %s\n População: %d\n", codigo, nome, populacao);
    printf(" Área: %f\n PIB: %f\n Pontos turísticos: %d\n", area, pib, pontosturisticos);

    return 0;

}
