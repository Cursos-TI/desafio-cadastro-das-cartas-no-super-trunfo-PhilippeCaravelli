#include <stdio.h>

int main(){

    char carta[20];
    char estado[20];;
    char cidade[20];
    float populacao;
    float area;
    float pib;
    int turistico;


    printf("Carta A02\n");

    printf("Digite a carta: ");
    scanf("%s", carta);
    printf("A carta e: %s\n", carta);

    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("O estado e: %s\n", estado);

    printf("Digite a cidade: ");
    scanf("%s", cidade);
    printf("A cidade e: %s\n", cidade);

    printf("Digite a populacao: ");
    scanf("%f", &populacao);
    printf("A populacao e: %.3f milhoes\n", populacao); 
    
    printf("Digite a area km2: ");
    scanf("%f", &area);
    printf("A area e: %.1f km2\n", area);

    printf("Digite o pib milhoes: ");
    scanf("%f", &pib);
    printf("O pib e: %.1f milhoes\n", pib);

    printf("Quantos pontos turisticos existem? ");
    scanf("%d", &turistico);
    printf("O numero de pontos turisticos e: %d\n", turistico);



}