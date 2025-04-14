#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //Carta 01

   
    float populacao, pontoturistico;
    float area, pib, densidadepopulacional;
    int carta_01, carta_02;
    char pais_01[50], pais_02[50];


    printf("Carta 01 \n");

    printf("Qual o país: ");
    scanf("%s", &pais_01);

    printf("Digite a população: ");
    scanf("%f", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%f ", &pontoturistico);

    densidadepopulacional = populacao / area;

    //Carta 02

    printf("Carta 02 \n");


    float populacao_2, pontoturistico_2;
    float area_2, pib_2, densidadepopulacional_2;

     
    printf("Qual o país: ");
    scanf("%s", &pais_02);
    
    printf("Digite a população: ");
    scanf("%f", &populacao_2);

    printf("Digite a área: ");
    scanf("%f", &area_2);

    printf("Digite o pib: ");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%f", &pontoturistico_2);

    densidadepopulacional_2 = populacao_2 / area_2;


srand(time(0));

printf(" ### Super trunfo ### \n");
printf("carta 1 \n");
printf("escolha a opção: \n");
printf("1.População \n");
printf("2.Área \n");
printf("3.Pontos turísticos \n");
printf("4.Densidade democrática \n");
scanf("%d", &carta_01);

printf(" ### Super trunfo ### \n");
printf("carta 2 \n");
printf("escolha a opção: \n");
printf("1.População \n");
printf("2.Área \n");
printf("3.Pontos turísticos \n");
printf("4.Densidade democrática \n");
scanf("%d", &carta_02);



switch (carta_01)
{
case 1:
    printf("O jogador 1: População - ", populacao);
    break;

case 2:
    printf("O jogador 1: Área - ", area);
    break;    

case 3:
    printf("O jogador 1: pontos turísticos - ", pontoturistico);
    break;
    
case 4:
    printf("O jogador 1: Densidade democrática - ", densidadepopulacional);
    break;    


default:
    printf("Opção inválida!");
    break;
}

switch (carta_02)
{
case 1:
    printf("O jogador 2: População", populacao_2);
    break;

case 2:
    printf("O jogador 2: Área", area_2);
    break;    

case 3:
    printf("O jogador 2: pontos turísticos", pontoturistico_2);
    break;
    
case 4:
    printf("O jogador 2: Densidade democrática", densidadepopulacional_2);
    break;    


default:
    printf("Opção inválida!");
    break;
}

if (carta_01 == carta_02){
    printf("### Jogo empatou ### \n");
} else if ((carta_01 == 1 > carta_02 == 1) ||
          (carta_01 == 2 > carta_02 == 2) ||
          (carta_01 == 3 > carta_02 == 3) ||
          (carta_01 == 4 > carta_02 == 4)){
    printf("### A carta 01 venceu ### \n");
}else{
    printf("### A carta 02 venceu ###");
}



 
return 0;
}
