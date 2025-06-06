#include <stdio.h>

// Função que para calcular densidade e pib per capita
void calcular_dados(int populacao, float area, float pib, float *densidade, float *pib_per_capita) {
    *densidade = populacao / area;
    *pib_per_capita = pib / populacao;
}

int main() {
    // Declaração de Variáveis
    char estado[50];                    // Nome do Estado
    char codigo_da_carta[50];           // Código da Carta
    char nome_da_cidade[50];            // Nome da Cidade
    int populacao;                      // População da Cidade
    float area;                         // Área em km²
    float pib;                          // PIB (Produto Interno Bruto)
    int pontos_turisticos;              // Número de Pontos Turísticos
    float densidade_demografica;        // Densidade Demográfica
    float pib_per_capita;               // PIB per Capita

    // Cadastro da Carta 1
    printf("\n=== Cadastro de Carta ===\n");
    printf("\n=== Cadastre a primeira Carta ===\n");

    printf("Digite o Nome do Estado:\n");
    fgets(estado, 50, stdin);

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo_da_carta);
    getchar();

    printf("Digite o Nome da Cidade:\n");
    fgets(nome_da_cidade, 50, stdin);

    printf("Digite a População:\n");
    scanf("%d", &populacao);
    getchar();

    printf("Digite a Área:\n");
    scanf("%f", &area);
    getchar();

    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    getchar();

    printf("Digite a Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);
    getchar();

    // Cálculo dos dados
    calcular_dados(populacao, area, pib, &densidade_demografica, &pib_per_capita);

    // Exibe os Dados da Carta 1
    printf("\n=== Dados da Primeira Carta ===\n");
    printf("Estado: %s", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Cidade: %s", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade_demografica);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    // Cadastro da Carta 2
    printf("\n=== Cadastre a Segunda Carta ===\n");

    printf("Digite o Nome do Estado:\n");
    fgets(estado, 50, stdin);

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo_da_carta);
    getchar();

    printf("Digite o Nome da Cidade:\n");
    fgets(nome_da_cidade, 50, stdin);

    printf("Digite a População:\n");
    scanf("%d", &populacao);
    getchar();

    printf("Digite a Área:\n");
    scanf("%f", &area);
    getchar();

    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    getchar();

    printf("Digite a Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);
    getchar();

    // Cálculo dos dados
    calcular_dados(populacao, area, pib, &densidade_demografica, &pib_per_capita);

    // Exibe os Dados da Carta 2
    printf("\n=== Dados da Segunda Carta ===\n");
    printf("Estado: %s", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Cidade: %s", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Demográfica: %.2f habitantes/km²\n", densidade_demografica);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    return 0;
}
