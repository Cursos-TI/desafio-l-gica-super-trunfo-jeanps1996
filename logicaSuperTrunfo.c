#include <stdio.h>

int main() {

    //Carta 01

    char estado[50];
    char codigoestado[50];
    char cidade[50];
    int populacao, pontoturistico;
    float area, pib, densidadepopulacional, pibpercapita;

    printf("Carta 01 \n");

    printf("Digite o nome do estado: ");
    scanf("%s ", &estado);

    printf("Digite o código do estado: ");
    scanf("%s ", &codigoestado);

    printf("Digite o nome da cidade: ");
    scanf("%s ", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o pib: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d ", &pontoturistico);

    densidadepopulacional = populacao / area;
    pibpercapita = pib / populacao;

    //Carta 02

    printf("Carta 02 \n");

    char estado_2[50];
    char codigoestado_2[50];
    char cidade_2[50];
    int populacao_2, pontoturistico_2;
    float area_2, pib_2, densidadepopulacional_2, pibpercapita_2;



    printf("Digite o nome do estado: ");
    scanf("%s ", &estado_2);

    printf("Digite o código do estado: ");
    scanf("%s ", &codigoestado_2);

    printf("Digite o nome da cidade: ");
    scanf("%s ", &cidade_2);

    printf("Digite a população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área: ");
    scanf("%f", &area_2);

    printf("Digite o pib: ");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontoturistico_2);

    densidadepopulacional_2 = populacao_2 / area_2;
    pibpercapita_2 = pib_2 / populacao_2;
   
if (populacao > populacao_2) {
    printf("a carta 01 tem a maior população ##Carta vencedora## \n")
} else{
    printf("a carta 02 tem a maior população ##Carta vencedora##\n")    
}
    

return 0;
}
