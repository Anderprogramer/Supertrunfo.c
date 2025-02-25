#include<stdio.h>

int main()
{
    char Estado[50];
    char Carta[50];
    char Cidade[50];
    float População;
    float Area;
    float Pib;
    int pontos;
    
    
    printf("Bem vindos ao Supertrunfo!\n");
    printf("\nDicas importantes:\n\nPara cada carta, Você deverá fornecer as seguintes informações:\n");
    printf("\nEstado: Uma letra de 'A' a 'H' representando um dos oito estados\n");
    printf("\nCódigo da Carta: A letra do estado seguida de um número de 01 a 04\n");
    printf("\nCidade: O nome da cidade.\n");
    printf("\nPopulação: O número de habitantes da cidade.\n");
    printf("\nÁrea (em km²): A área da cidade em quilômetros quadrados.\n");
    printf("\nPIB: O Produto Interno Bruto da cidade.\n");
    printf("\nNúmero de Pontos Turísticos: A quantidade de pontos turísticos na cidade.\n");
    printf("\nExemplo:\n");
    printf("Estado : Alagoas\nCódigo da Carta: A01\n");
    printf("Nome da Cidade: Belém\nDigite a População: 1.303\n");
    printf("Digite a área: 1.059\nInsira o PIB: 33.4\n");
    printf("Insira os pontos Turísticos: 236\n");
    printf("\nVamos lá ?\n");

    printf("\nDigite o Estado: ");
    scanf(" %s", &Estado);
    
    printf("Digite o código da Carta: ");
    scanf("%s", &Carta);
    
    printf("Digite a Cidade: ");
    scanf("%s", &Cidade);
    
    printf("Digite a População: ");
    scanf("%f", &População);
    
    printf("Digite a  area: ");
    scanf(" %f", &Area);
    
    printf("Insira o Pib: ");
    scanf("%f", &Pib);
    
    printf("Insira os pontos turísticos: ");
    scanf("%d", &pontos);
    
    printf("\nEssa é a sua Primeira Carta: \n");
    
    printf("\nEstado: %s\nA Cidade é: %s\n", Estado, Cidade);
    printf("Codigo da Carta: %s\n", Carta);
    printf("População: %.2f\n", População);
    printf("Area: %f\nPopulação: %f\n", Area, População);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("\nPerfeito ! agora vamos para a segunda carta.");
    
    printf("\nDigite o Estado: ");
    scanf("%s", &Estado);
    
    printf("Digite o código da Carta: ");
    scanf("%s", &Carta);
    
    printf("Digite a Cidade: ");
    scanf("%s", &Cidade);
    
    printf("Digite a População: ");
    scanf("%f", &População);
    
    printf("Digite a  area: ");
    scanf("%f", &Area);
    
    printf("Insira o Pib: ");
    scanf("%f", &Pib);
    
    printf("Insira os pontos turísticos: ");
    scanf("%d", &pontos);
    
    printf("Essa é sua 2° carta: \n");
    
    printf("\nO Estado é: %s\nA Cidade é: %s\n", Estado, Cidade);
    printf("Codigo da Carta: %s\n", Carta);
    printf("População: %.2f\n", População);
    printf("Area km²: %f\nPopulação: %f\n", Area, População);
    printf("Total de Pontos Turísticos: %d\n", pontos);
    

    return 0;
}