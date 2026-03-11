#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[4], codigo2[4], nome1[50], nome2[50];
    int populacao1, populacao2, ptsT1, ptsT2;
    float area1, area2, pib1, pib2;

    printf("Insira os dados das cartas de Super Trunfo a serem cadastradas: \n");

    printf("\nCadastro carta 1: \n"); //Começa o cadastro da primeira carta

    printf("Informe uma letra de 'A' a 'H' para representar o estado da carta: ");
    scanf("%c", &estado1);
    
    printf("Informe a letra digitada acima mais um numero de 01 a 04 para cadastrar o código da carta: ");
    scanf(" %s", codigo1);

    printf("Informe o nome da cidade(Não use espaços): ");
    scanf(" %s", nome1);

    printf("Informe o número de habitates da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB(Produto interno bruto) da cidade: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turisticos da cidade: ");
    scanf("%d", &ptsT1);



    printf("\nCadastro carta 2: \n"); //Começa o cadastro da segunda carta

    printf("Informe uma letra de 'A' a 'H' para representar o estado da carta: ");
    scanf(" %c", &estado2); //Espaço adicionado dentro das aspas para a limpeza de buffer  - " %c" - outra forma seria usar scanf("%c") antes
    
    printf("Informe a letra digitada acima mais um número de 01 a 04 para cadastrar o código da carta: ");
    scanf(" %s", codigo2);

    printf("Informe o nome da cidade(Não use espaços): ");
    scanf(" %s", nome2);

    printf("Informe o número de habitates da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB(Produto interno bruto) da cidade: ");
    scanf("%f", &pib2);

    printf("Informe o número de pontos turisticos da cidade: ");
    scanf("%d", &ptsT2);


    printf("\nCartas Cadastradas: \n");

    printf("\nCarta 1: \n");    // exibe os dados cadastrados na primeira carta
    
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("Número de habitantes: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB(Produto interno bruto): %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turisticos: %d\n", ptsT1);
    
    double densiPopulacionalA = populacao1 / area1; //Calcula a densidade populacional da cidade A
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacionalA);   

    double pibPercapita = pib1/populacao1;  //Calcula o PIB Percapita da cidade A
    printf("PIB Percapita: %.2f reais\n", pibPercapita);

    printf("\nCarta 2: \n");    // exibe os dados cadastrados na primeira carta
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("Número de habitantes: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB(Produto interno bruto): %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turisticos: %d\n", ptsT2);

    double densiPopulacionalB = populacao2 / area2; //Calcula a densidade populacional da cidade B
    printf("Densidade Populacional: %.2f hab/km²\n", densiPopulacionalB);

    double pibPercapitaB = pib2/populacao2; //Calcula o PIB Percapita da cidade B
    printf("PIB Percapita: %.2f reais\n", pibPercapitaB);

    return 0;
}
