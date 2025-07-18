#include <stdio.h>
#include <stdlib.h>

        // Desafio Super Trunfo 
        //Nivel Aventureiro (logica)

        int main() {
            // Carta 01
            char pais1[20], nome_cidade1[20]; 
            int pontos_turisticos1, populacao1;
            float area1, pib1, densidade1, pib_per1, dens_inversa1, somac1bat1, somac1bat2;


            // Carta 02
            char pais2[20], nome_cidade2[20]; 
            int pontos_turisticos2, populacao2;;
            float area2, pib2, densidade2, pib_per2, dens_inversa2, somac2bat1, somac2bat2;

            //Batalha
            int batalha1, batalha2;
            float soma_carta1, soma_carta2;

        
            printf("CADASTRO DA CARTA 01: \n");

            printf("Digite o nome do país onde a cidade da carta está localizada \n");
            scanf(" %s", pais1);

            // printf("Código da carta, use a letra acima com números de 01 a 04 (ex. A01): ");
            // scanf(" %s", cod_carta1);

            printf("Nome da cidade: ");
            getchar(); // limpa o \n e permite cidade com mais de 2 palavras
            scanf("%[^\n]", nome_cidade1); // %[^\n] detalhe que libera 2 palavras

            printf("População da cidade: ");
            scanf(" %d", &populacao1);

            printf("Quantidade de pontos turísticos: ");
            scanf(" %d", &pontos_turisticos1);

            printf("Área da cidade (em km²): ");
            scanf(" %f", &area1);

            printf("PIB da cidade: ");
            scanf(" %f", &pib1);

            //Calculos densidade e pib per capta 1

            densidade1 = (float) populacao1 / area1;
            dens_inversa1 = (float) 1 / densidade1;
            pib_per1 = (float) pib1 / populacao1;

        //CARTA 02 input
            printf("\n CADASTRO DA CARTA 02\n");

            printf("Digite o nome do país onde a cidade da carta está localizada\n ");
            scanf(" %s", pais2);

            // printf("Código da carta, use a letra acima com números de 01 a 04 (ex. A01, não repita o mesmo codigo da carta 01) ");
            // scanf(" %s", cod_carta2);

            printf("Nome da cidade: ");
            getchar();
            scanf(" %[^\n]", nome_cidade2);

            printf("População da cidade: ");
            scanf(" %d", &populacao2);

            printf("Quantidade de pontos turísticos: ");
            scanf(" %d", &pontos_turisticos2);

            printf("Área da cidade (em km²): ");
            scanf(" %f", &area2);

            printf("PIB da cidade:");
            scanf(" %f", &pib2);

            printf("-------------------------------------\n");

            //Calculos densidade e pib per capta 2:
            densidade2 = (float) populacao2 / area2;
            dens_inversa2 = (float) 1 / densidade2;
            pib_per2 = (float) pib2 / populacao2;

        //RESULTADOS
            printf("CARTAS CADASTRADAS \n");

        //CARTA01
            printf("\nCARTA 01:\n");
            printf("País 1: %s\n", pais1);
            // printf("Código: %s\n", cod_carta1);
            printf("Cidade: %s\n", nome_cidade1);
            printf("População: %d\n", populacao1);
            printf("Pontos turísticos: %d\n", pontos_turisticos1);
            printf("Área: %.0f km²\n", area1);
            printf("PIB: R$ %.0f  \n", pib1);
            printf("Densidade populacional: %.3f  hab/km² \n", densidade1);    
            printf("PIB per capta: R$ %.2f  \n", pib_per1);
            // printf("SUPER PODER>>>> %.2f  \n", super_poder1);

        //CARTA02
            printf("\nCARTA 02:\n");
            printf("Pais 2: %s\n", pais2);
            printf("Cidade: %s\n", nome_cidade2);
            printf("População: %d\n", populacao2);
            printf("Pontos turísticos: %d\n", pontos_turisticos2);
            printf("Área: %.0f km²\n", area2);
            printf("PIB: R$ %.0f  \n", pib2);
            printf("Densidade populacional: %.3f hab/km²  \n", densidade2);  
            printf("PIB per capta: R$ %.2f  \n", pib_per2);    
            // printf("SUPER PODER>>>> %.2f  \n\n", super_poder2);

            //BATALHA DOS RESULTADOS! 
            printf("---------------------------------------------------\n");
            printf("Agora escolha um atributo para a PRIMEIRA BATALHA do Super Trunfo!\n\n");

printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &batalha1);


switch (batalha1) {
    case 1: // Pop
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (populacao1 > populacao2) ?
            printf("A vitória do quesito População é: %s com %d pessoas\n", nome_cidade1, populacao1) :
            printf("A vitória do quesito População é: %s com %d pessoas\n", nome_cidade2, populacao2);
        
            somac1bat1 = populacao1;
            somac2bat1 = populacao2;
        
            break;

    case 2: //area
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (area1 > area2) ?
            printf("A vitória do quesito Área é: %s com %.2f km²\n", nome_cidade1, area1) :
            printf("A vitória do quesito Área é: %s com %.2f km²\n", nome_cidade2, area2);

            somac1bat1 = area1;
            somac2bat1 =  area2;
     
            break;

    case 3: // PIB
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (pib1 > pib2) ?
            printf("A vitória do quesito PIB é: %s com R$ %.2f bilhões\n", nome_cidade1, pib1) :
            printf("A vitória do quesito PIB é: %s com R$ %.2f bilhões\n", nome_cidade2, pib2);
            somac1bat1 = pib1;
            somac2bat1 = pib2;

            break;

    case 4: //pontos turísticos
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (pontos_turisticos1 > pontos_turisticos2) ?
            printf("A vitória do quesito Pontos Turísticos é: %s com %d ponto(s)\n", nome_cidade1, pontos_turisticos1) :
            printf("A vitória do quesito Pontos Turísticos é: %s com %d ponto(s)\n", nome_cidade2, pontos_turisticos2);
            somac1bat1 = pontos_turisticos1;
            somac2bat1 =pontos_turisticos2;

            break;

    case 5: //densidade demográfica
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (dens_inversa1 < dens_inversa2) ?
            printf("A vitória do quesito Densidade Demográfica é: %s com %.2f pessoas por km²\n", nome_cidade1, densidade1) :
            printf("A vitória do quesito Densidade Demográfica é: %s com %.2f pessoas por km²\n", nome_cidade2, densidade2);
        
            somac1bat1 =dens_inversa1;
            somac2bat1 =dens_inversa2;
        
            break;

    default:
        printf("Opção inválida! Escolha de 1 a 5.\n");
        break;
}


printf("---------------------------------------------------\n");
printf("Agora escolha um atributo para a SEGUNDA BATALHA do Super Trunfo!\n\n");

printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &batalha2);

if(batalha2 == batalha1){
    printf("Não escolha o mesmo atributo que o PRIMEIRO para a SEGUNDA batalha");
    exit(1);
}

switch (batalha2) {
    case 1: //Pop
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (populacao1 > populacao2) ?
            printf("A vitória do quesito População é: %s com %d pessoas\n", nome_cidade1, populacao1) :
            printf("A vitória do quesito População é: %s com %d pessoas\n", nome_cidade2, populacao2);
        
            somac1bat2 =populacao1;
            somac2bat2 =populacao2;
        
            break;

    case 2: //area
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (area1 > area2) ?
            printf("A vitória do quesito Área é: %s com %.2f km²\n", nome_cidade1, area1) :
        
            printf("A vitória do quesito Área é: %s com %.2f km²\n", nome_cidade2, area2);
            
            somac1bat2 =area1;
            somac2bat2 =area2;
        
            break;

    case 3: // PIB
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (pib1 > pib2) ?
            printf("A vitória do quesito PIB é: %s com R$ %.2f bilhões\n", nome_cidade1, pib1) :
            printf("A vitória do quesito PIB é: %s com R$ %.2f bilhões\n", nome_cidade2, pib2);
        
            somac1bat2 = pib1;
            somac2bat2 = pib2;
        
            break;

    case 4: // pontos turísticos
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (pontos_turisticos1 > pontos_turisticos2) ?
            printf("A vitória do quesito Pontos Turísticos é: %s com %d ponto(s)\n", nome_cidade1, pontos_turisticos1) :
            printf("A vitória do quesito Pontos Turísticos é: %s com %d ponto(s)\n", nome_cidade2, pontos_turisticos2);
        
            somac1bat2 =pontos_turisticos1;
            somac2bat2 =pontos_turisticos2;
        
            break;

    case 5: //densidade demográfica
        printf("A batalha vai ser entre: %s (%s) e %s (%s)\n", nome_cidade1, pais1, nome_cidade2, pais2);

        (dens_inversa1 < dens_inversa2) ?
            printf("A vitória do quesito Densidade Demográfica é: %s com %.2f pessoas por km²\n", nome_cidade1, densidade1) :
            printf("A vitória do quesito Densidade Demográfica é: %s com %.2f pessoas por km²\n", nome_cidade2, densidade2);

            somac1bat2 = dens_inversa1;
            somac2bat2 = dens_inversa2;

            break;

    default:
        printf("Opção inválida! Escolha de 1 a 5.\n");
        break;
}

//  A soma das pontuações
soma_carta1 = somac1bat1 + somac1bat2;
soma_carta2 = somac2bat1 + somac2bat2;

printf("\n===============================================\n");
printf("RESULTADO FINAL DA BATALHA\n\n");

// Exibe dados da carta 1
printf("Carta 1 - %s (%s):\n", nome_cidade1, pais1);
printf("- Atributo da 1ª batalha: %.2f\n", somac1bat1);
printf("- Atributo da 2ª batalha: %.2f\n", somac1bat2);
printf("=> Soma total: %.2f\n\n", soma_carta1);

// Exibe dados da carta 2
printf("Carta 2 - %s (%s):\n", nome_cidade2, pais2);
printf("- Atributo da 1ª batalha: %.2f\n", somac2bat1);
printf("- Atributo da 2ª batalha: %.2f\n", somac2bat2);
printf("=> Soma total: %.2f\n\n", soma_carta2);

if (soma_carta1 > soma_carta2) {
    printf("A cidade vencedora é: %s (%s) \n", nome_cidade1, pais1);
} else if (soma_carta2 > soma_carta1) {
    printf("A cidade vencedora é: %s (%s) \n", nome_cidade2, pais2);
} else {
    printf(" Empate! As 2 cidades tiveram a mesma pontuação.\n");
}

        
        return 0;
}
