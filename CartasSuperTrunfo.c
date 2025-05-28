#include <stdio.h> 
#include <stdlib.h>
int main() { 
    char estado[50],estado2[50];
    char codigo[50], codigo2[50];
    char nomedacidade[50],nomedacidade2[50];
    int populacao, populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontosturisticos, pontosturisticos2;

    printf("Digite a inicial da carta/estado:\n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomedacidade);

    printf("Digite o numero da população em milhões:\n");
    scanf("%d",&populacao);
    getchar();

    printf("Digite a area em km2:\n");
    scanf("%f", &area);
    getchar();

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);

    

      printf("Digite a inicial da segunda carta/estado:\n");
    scanf("%s", &estado2);

    printf("Digite o codigo da segunda carta:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Digite o numero da população em milhões:\n");
    scanf("%d",&populacao2);
    getchar();

    printf("Digite a area em km2:\n");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB da segunda cidade:\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos da segunda cidade:\n");
    scanf("%d", &pontosturisticos2);
    system("clear");

printf("CARTA 01:\n");

    printf("\nEstado:%s \n", estado);
    printf("Codigo da carta:%s \n", codigo);
    printf("Nome da cidade é:%s \n", nomedacidade);
    printf("População:%d \n", populacao);
    printf("Área e de:%.2f km2 \n",area);
    printf("O PIB é de:%.2f Bilhões \n",PIB);
     printf("Pontos turisticos:%d \n",pontosturisticos);

    printf("\nCARTA 02:\n");

    printf("\nEstado:%s \n", estado2);
    printf("Codigo da carta:%s \n", codigo2);
    printf("Nome da cidade é:%s \n", nomedacidade2);
    printf("População:%d \n", populacao2);
    printf("Área e de:%.2f km2 \n",area2);
    printf("O PIB é de:%.2f Bilhões \n",PIB2);
     printf("Pontos turisticos:%d \n",pontosturisticos2);


   
    return 0;
}
