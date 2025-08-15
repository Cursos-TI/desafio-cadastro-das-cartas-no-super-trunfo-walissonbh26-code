#include <stdio.h>


int main (){


char cidade[40], cidade2[40];
char estado, estado2;
char codigo[40],codigo2[40];
int populacao, populacao2;  
int turistico, turistico2;
float area,area2;
float pib, pib2;


//carta 1 do jogo

printf ("Primeira letra do Estado:\n");
scanf ("%c",&estado);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo);
printf ("Nome da Cidade:\n");
scanf ("%s",&cidade);
printf ("População da Cidade:\n");
scanf ("%f",&populacao);
printf ("Pontos Turisticos:\n");
scanf ("%d",&turistico);
printf ("Área em km²:\n");
scanf ("%f",&area);
printf ("Pib:\n");
scanf ("%f",&pib);

//carta 1 do jogo

printf ("Primeira letra do Estado:\n");
scanf ("%c",&estado2);
printf("Codigo da carta de 1 à 4 (ex A01, A03):\n");
scanf("%s",&codigo2);
printf ("Nome da Cidade:\n");
scanf ("%s",&cidade2);
printf ("População da Cidade:\n");
scanf ("%f",&populacao2);
printf ("Pontos Turisticos:\n");
scanf ("%d",&turistico2);
printf ("Área em km²:\n");
scanf ("%f",&area2);
printf ("Pib:\n");
scanf ("%f",&pib2);

printf ("Carta 1:\n");
printf ("Estado:%c\n" ,estado);
printf ("Codigo:%s\n" ,codigo);
printf ("Cidade:%s\n" ,cidade);
printf ("População:%f\n",populacao);
printf ("Area:%f\n",area);
printf ("Pib:%f\n",pib);
printf ("Pontos Turisticos:%d\n",turistico);


printf ("Carta 2:\n");
printf ("Estado:%c\n" ,estado2);
printf ("Codigo:%s\n" ,codigo2);
printf ("Cidade:%s\n" ,cidade2);
printf ("População:%f\n",populacao2);
printf ("Area:%f\n",area2);
printf ("Pib:%f\n",pib2);
printf ("Pontos Turisticos:%d\n",turistico2);
return 0;

}