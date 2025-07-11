#include <stdio.h>

        // Desafio Super Trunfo - Países (atividade parte 3) 
        //Nivel mestre

        // Guilherme Lino

        int main() {
            // Carta 01
            char estado1, cod_carta1[20], nome_cidade1[20]; 
            int pontos_turisticos1;
            unsigned long int populacao1;
            float area1, pib1, densidade1, pib_per1, super_poder1, dens_inversa1;


            // Carta 02
            char estado2, cod_carta2[20], nome_cidade2[20]; 
            int pontos_turisticos2;
            unsigned long int populacao2;
            float area2, pib2, densidade2, pib_per2, super_poder2, dens_inversa2;


        //CARTA 01  input
            printf("CADASTRO DA CARTA 01: \n");

            printf("Digite a inicial de um estado, use as letras de A até H: ");
            scanf(" %c", &estado1);

            printf("Código da carta, use a letra acima com números de 01 a 04 (ex. A01): ");
            scanf(" %s", cod_carta1);

            printf("Nome da cidade: ");
            getchar(); // limpa o \n e permite cidade com mais de 2 palavras
            scanf("%[^\n]", nome_cidade1); // %[^\n] detalhe que libera 2 palavras

            printf("População da cidade: ");
            scanf(" %lu", &populacao1);

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
            super_poder1 = (float) pontos_turisticos1 + (float) populacao1 + area1 + pib1 + dens_inversa1 + pib_per1;


        //CARTA 02 input
            printf("\n CADASTRO DA CARTA 02\n");

            printf("Digite a inicial de um estado, use as letras de A até H: ");
            scanf(" %c", &estado2);

            printf("Código da carta, use a letra acima com números de 01 a 04 (ex. A01, não repita o mesmo codigo da carta 01) ");
            scanf(" %s", cod_carta2);

            printf("Nome da cidade: ");
            getchar();
            scanf(" %[^\n]", nome_cidade2);

            printf("População da cidade: ");
            scanf(" %lu", &populacao2);

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
            super_poder2 = (float) pontos_turisticos2 + (float) populacao2 + area2 + pib2 + dens_inversa2 + pib_per2;

        //RESULTADOS
            printf("CARTAS CADASTRADAS \n");

        //CARTA01
            printf("\nCARTA 01:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", cod_carta1);
            printf("Cidade: %s\n", nome_cidade1);
            printf("População: %lu\n", populacao1);
            printf("Pontos turísticos: %d\n", pontos_turisticos1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: R$ %.2f  \n", pib1);
            printf("Densidade populacional: %.2f  hab/km² \n", densidade1);    
            printf("PIB per capta: R$ %.2f  \n", pib_per1);
            printf("SUPER PODER>>>> %.2f  \n", super_poder1);

        //CARTA02
            printf("\nCARTA 02:\n");
            printf("Estado: %c\n", estado2);
            printf("Código: %s\n", cod_carta2);
            printf("Cidade: %s\n", nome_cidade2);
            printf("População: %lu\n", populacao2);
            printf("Pontos turísticos: %d\n", pontos_turisticos2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: R$ %.2f  \n", pib2);
            printf("Densidade populacional: %.2f hab/km²  \n", densidade2);  
            printf("PIB per capta: R$ %.2f  \n", pib_per2);    
            printf("SUPER PODER>>>> %.2f  \n\n", super_poder2);

            // BATALHA DOS RESULTADOS! 
            printf("---------------------------------------------------\n");
            printf("A BATALHA DAS CARTAS TERMINOU! ESTE É O RESULTADO:\n\n");

            
            // População
            if (populacao1 > populacao2) {
                printf("População: Carta 1 venceu (1)\n");
            } else {
                printf("População: Carta 2 venceu (0)\n");
            }

            // Área
            if (area1 > area2) {
                printf("Área: Carta 1 venceu (1)\n");
            } else {
                printf("Área: Carta 2 venceu (0)\n");
            }

            // PIB
            if (pib1 > pib2) {
                printf("PIB: Carta 1 venceu (1)\n");
            } else {
                printf("PIB: Carta 2 venceu (0)\n");
            }

            // Pontos turísticos
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Pontos Turísticos: Carta 1 venceu (1)\n");
            } else {
                printf("Pontos Turísticos: Carta 2 venceu (0)\n");
            }

            // Densidade populacional (invertida    )
            if (densidade1 < densidade2) {
                printf("Densidade Populacional: Carta 1 venceu (1)\n");
            } else {
                printf("Densidade Populacional: Carta 2 venceu (0)\n");
            }

            // PIB per capita
            if (pib_per1 > pib_per2) {
                printf("PIB per Capita: Carta 1 venceu (1)\n");
            } else {
                printf("PIB per Capita: Carta 2 venceu (0)\n");
            }

            // Super Poder
            if (super_poder1 > super_poder2) {
                printf("Super Poder: Carta 1 venceu (1)\n");
            } else {
                printf("Super Poder: Carta 2 venceu (0)\n");
            }


            return 0;
        }
