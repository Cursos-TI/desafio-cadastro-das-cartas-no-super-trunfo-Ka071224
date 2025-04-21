#include <stdio.h>

int main(){

    printf("****Desafio Super trunfo****\n");
    
printf("Carta 1: \n");

char Estado = 'A';
char Codigo_da_carta[20] = "A01";
char Cidade[20] = "Maceio";
unsigned long int Populacao = 957916;
float Area = 509.6;
float Pib = 27480000.000;
int Pontos_turisticos = 150;
float Densidade_populacional = 1 / (957916 / 509.6);
float Pib_per_capita = 27480000.000 / 957916;
float Super_poder = Populacao + Area + Pib + Pontos_turisticos + Densidade_populacional + Pib;

printf("O Estado é: %c\n", Estado);
printf("O Codigo da Carta é: %s\n", Codigo_da_carta);
printf("A cidade é: %s\n", Cidade);
printf("A populacao é: %u\n", Populacao);
printf("A Area em KM² é: %.1f\n", Area);
printf("O Pib é: %f\n", Pib);
printf("Os pontos turisticos são: %d\n", Pontos_turisticos);
printf("A densidade populacional é: %.4f\n", Densidade_populacional);
printf("O pib per capita e: %.2f\n", Pib_per_capita);
printf("O Super Poder é: %f\n", (float) Populacao + Area + Pib + Pontos_turisticos + Densidade_populacional + Pib);

printf("Carta 2: \n");

char estado = 'G';
char codigo_da_carta[20] = "G02";
char cidade[20] = "Anapolis";
unsigned long int populacao = 395869;
float area = 918.0;
float pib = 17788000.000;
int pontos_turisticos = 50;
float densidade_populacional = 1/ (395869 / 918.0);
float pib_per_capita = 17788000.000 / 395869;
float super_poder = populacao + area + pib + pontos_turisticos + densidade_populacional + pib;

printf("O Estado é: %c\n", estado);
printf("O Codigo da Carta é: %s\n", codigo_da_carta);
printf("A cidade é: %s\n", cidade);
printf("A populacao é: %u\n", populacao);
printf("A Area em KM² é: %.1f\n", area);
printf("O Pib é: %f\n", pib);
printf("Os pontos turisticos são: %d\n", pontos_turisticos);
printf("A densidade populacional é: %.4f\n", densidade_populacional);
printf("O pib per capita e: %.2f\n", pib_per_capita);
printf("O Super Poder é: %f\n", (float)populacao + area + pib + pontos_turisticos + densidade_populacional + pib);

printf("Comparação de Cartas: \n");

unsigned long int Resultado_Populacao = Populacao > populacao;
printf("A populacao da carta 1 venceu: %u\n", Resultado_Populacao);

int Resultado_Area = Area > area;
printf("A Area da carta 2 venceu: %d\n", Resultado_Area);

int Resultado_Pib = Pib > pib;
printf("O Pib da carta 1 venceu: %d\n", Resultado_Pib);

int Resultado_Pontos_turisticos = Pontos_turisticos > pontos_turisticos;
printf("Os Pontos turisticos da carta 1 venceu: %d\n", Resultado_Pontos_turisticos);

int Resultado_Densidade_populacional = Densidade_populacional > densidade_populacional;
printf("A Densidade Populacional da carta 2 venceu: %d\n", Resultado_Densidade_populacional);

int Resultado_Pib_per_capita = Pib_per_capita > pib_per_capita;
printf("O Pib Per Capita da carta 2 venceu: %d\n", Resultado_Pib_per_capita);

int Resultado_Super_poder = Super_poder > super_poder;
printf("O Super poder da carta 1 venceu: %d\n", Resultado_Super_poder);



return 0;

}
