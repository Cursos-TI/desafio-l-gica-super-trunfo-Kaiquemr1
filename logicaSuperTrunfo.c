#include <stdio.h>
int main(){

    
    printf ("DESAFIO INTERATIVIDADE NO SUPER TRUNFO \n");

//Carta 1 Variáveis:
    char pais1[50]; //Insira o primeiro país
    int populacao1; //Insira o número da primeira população
    float area1; //Insira a primeiro área
    float pib1; //Insira o primeiro PIB
    int pontosturisticos1; //Insira o primeiro número de pontos turísticos
    float densidadedemografica1;
    int opcao;
    
    
    //Carta 2 Variáveis:
    char pais2[50]; //Insira o primeiro país
    int populacao2; //Insira o número da primeira população
    float area2; //Insira a primeiro área
    float pib2; //Insira o primeiro PIB
    int pontosturisticos2; //Insira o primeiro número de pontos turísticos
    float densidadedemografica2;
    
    //Dados da carta1:
    printf("Digite o pais1:\n");
    scanf("%s", pais1);

    printf("Digite a população1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área1:\n");
    scanf("%f", &area1);

    printf("Digite o pib1:\n");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos1:\n");
    scanf("%d", &pontosturisticos1);


    densidadedemografica1= (float) populacao1/area1;
    
    printf ("CARTA 1\n");
    printf ("O seu país é:%s \n", pais1);
    printf ("A população é:%d \n", populacao1);
    printf ("A área é:%f \n", area1);
    printf ("O pib é:%f \n", pib1);
    printf ("O número de pontos turísticos é:%d \n", pontosturisticos1);
    printf ("A densidade demográfica é: %f\n\n", densidadedemografica1);
    
    
    //Dados da carta 2:
    printf("Digite o país2:\n");
    scanf("%s", pais2);

    printf("Digite a população2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área2:\n");
    scanf("%f", &area2);

    printf("Digite o pib2:\n");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos2:\n");
    scanf("%d", &pontosturisticos2);

    
    densidadedemografica2= (float) populacao2/area2;
    

    printf ("CARTA 2\n");
    printf ("O seu país é:%s \n", pais2);
    printf ("A população é:%d \n", populacao2);
    printf ("A área é:%f \n", area2);
    printf ("O pib é:%f \n", pib2);
    printf ("O número de pontos turísticos é:%d \n", pontosturisticos2);
    printf ("A densidade demográfica é: %f\n\n", densidadedemografica2);
    

        
    printf ("Escolha um atributo para a comparação:\n"); 
    printf ("1. população \n");
    printf ("2. área \n");
    printf ("3. pib \n");
    printf ("4. número de pontos turísticos \n");
    printf ("5. densidade demográfica \n");
    scanf ("%d", &opcao);
    
    printf ("Os países comparados foram: %s e %s\n\n", pais1, pais2);
    
      switch(opcao){
            
        case 1:
            printf ("O atributo comparado foi: população \n"); 
            printf ("%s: %d \n", pais1, populacao1);
            printf ("%s: %d \n", pais2, populacao2);
            if (populacao1>populacao2){
                printf ("Carta 1 venceu!");
            }else if(populacao1<populacao2){
                printf ("Carta 2 venceu!");
            }else{
                printf ("Empatou!");
            }
            break;
            
        case 2:
            printf ("O atributo comparado foi: área \n");
            printf ("%s: %f\n", pais1, area1);
            printf ("%s: %f\n", pais2, area2);
                if (area1>area2){
                 printf ("Carta 1 venceu!");
            }else if(area1<area2){
                printf ("Carta 2 venceu!");
            }else{
                printf ("Empatou!");
            }
            break;
            
        case 3:
            printf ("O atributo comparado foi: pib \n");
            printf ("%s: %f \n", pais1, pib1);
            printf ("%s: %f \n", pais2, pib2);
                if (pib1>pib2){
                printf ("Carta 1 venceu!");
            }else if(pib1<pib2){
                printf ("Carta 2 venceu!");
            }else{
                printf ("Empatou!");
            }
            break;
            
        case 4:
            printf ("O atributo comparado foi: pontos turísticos \n");
            printf ("%s: %d \n", pais1, pontosturisticos1);
            printf ("%s: %d \n", pais2, pontosturisticos2);
            if (pontosturisticos1>pontosturisticos2){
                printf ("Carta 1 venceu!");
            }else if(pontosturisticos1<pontosturisticos2){
                printf ("Carta 2 venceu!");
            }else{
                printf ("Empatou!");
            }
            break;
            
        case 5:
            printf ("O atributo comparado foi: densidade demográfica \n");
            printf ("%s: %f \n", pais1, densidadedemografica1);
            printf ("%s: %f \n", pais2, densidadedemografica2);
            if (densidadedemografica1>densidadedemografica2){
                printf ("Carta 2 venceu!");
            }else if(densidadedemografica1<densidadedemografica2){
                printf ("Carta 1 venceu!");
            }else{
                printf ("Empatou!");
            }
            break;
            
            default:
                printf ("Opção inválida\n");
            break;
        }
        
        
      

        return 0;
} 

