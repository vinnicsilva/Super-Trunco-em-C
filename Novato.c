#include <stdio.h>

int main() {

   // Declaração de Variáveis
   char estado [50];                    //Nome do Estado
   char codigo_da_carta[50];            //Código da Carta
   char nome_da_cidade[50];             //Nome da Cidade
   int populacao;                       //População da Cidade
   float area;                          //Área em KmÂ²
   float pib;                           //PIB (Produto Interno Bruto)
   int pontos_turisticos;               //Número de Pontos Turisticos

 
   //Cadastro da Carta (01)
    printf("\n=== Cadastro de Carta ===\n");

    printf("\n=== Cadastre a primeira Carta ===\n");
   // Solicita e Armazena os Dados da Carta (01)

    printf("Digite o Nome do Estado:\n");
    fgets(estado, 50, stdin); // Lê o Nome do Estado

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo_da_carta); // Lê o Código da Carta
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite o Nome da Cidade: \n");
    fgets(nome_da_cidade, 50, stdin); // Lê o Nome da Cidade
      
    printf("Digite a População: \n");
    scanf("%d", &populacao); // Lê a População
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite a Área: \n");
    scanf("%f", &area); // Lê a Área
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite o PIB: \n");
    scanf("%f", &pib); // Lê o PIB
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos); // Lê a quantidade de pontos turísticos
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    //Exibe os Dados da Carta (01)

    printf("\n=== Dados da Primeira Carta ===\n");
    printf("Estado: %s", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Cidade: %s", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d \n", pontos_turisticos);


    printf("\n=== Cadastre a Segunda Carta ===\n");
   // Solicita e Armazena os Dados da Carta (02)

    printf("Digite o Nome do Estado: \n");
    fgets(estado, 50, stdin); // Lê o Nome do Estado
        
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo_da_carta); // Lê o Código da Carta
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite o Nome da Cidade: \n");
    fgets(nome_da_cidade, 50, stdin); // Lê o Nome da Cidade
   
    printf("Digite a População: \n");
    scanf("%d", &populacao); // Lê a População
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite a Área: \n");
    scanf("%f", &area); // Lê a Área
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite o PIB: \n");
    scanf("%f", &pib); // Lê o PIB
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    printf("Digite a Quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos); // Lê a quantidade de pontos turísticos
    getchar();  // Remove o caractere de nova linha deixado pelo scanf

    //Exibe os Dados da Carta (02)
    
    printf("\n=== Dados da Segunda Carta ===\n");
    printf("Estado: %s", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Cidade: %s", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d \n", pontos_turisticos);

    return 0; // Finaliza o Programa
}