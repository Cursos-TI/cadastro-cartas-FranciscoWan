#include <stdio.h>

int main() {
    // Definição das variáveis
    char codigo[4];                // Ex: A01
    char nomeCidade[50];           // Nome da cidade
    double area;                   // Área da cidade
    double pib;                    // PIB da cidade
    int populacao;                 // População
    int n_pontos_turisticos;       // Número de pontos turísticos

    // Entrada de dados
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a área da cidade: ");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &n_pontos_turisticos);

    // Saída de dados
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nomeCidade);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("População: %d habitantes\n", populacao);
    printf("Pontos turísticos: %d\n", n_pontos_turisticos);

    return 0;
}

