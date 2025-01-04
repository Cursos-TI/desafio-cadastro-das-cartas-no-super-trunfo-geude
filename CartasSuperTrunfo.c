#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int codigo_cidade[10], pontos_turisticos;         //Código da cidade (A01, B02, etc...).
    char nome_cidade[50];
    float populacao, PIB, area;    //Aréa territórial, produto interno bruto e população da cidade.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Solicitar e ler os dados da cidade.

    printf("Digite o código da cidade: ");
    scanf("%d", &codigo_cidade);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

    printf("Digite a população da cidade: ");
    scanf("%f", &populacao);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite a área territórial da cidade: ");
    scanf("%f", &area);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nDados da carta\n");
    printf("Código da cidade:%i\n ", codigo_cidade);
    printf("Nome da cidade:%s\n", nome_cidade);
    printf("População da cidade:%s\n", populacao);
    printf("Quantidade de pontos turísticos:%i\n", pontos_turisticos);
    printf("Valor do PIB:%f\n", PIB);
    printf("Aréa territórial:%f\n", area);

    return 0;
}
