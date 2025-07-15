#include <stdio.h>

        // Desafio Super Trunfo 
        //Nivel Aventureiro (logica)

        int main() {
            // Carta 01
            char pais1[20], nome_cidade1[20]; 
            int pontos_turisticos1, populacao1;
            float area1, pib1, densidade1, pib_per1, dens_inversa1;


            // Carta 02
            char pais2[20], nome_cidade2[20]; 
            int pontos_turisticos2, populacao2;;
            float area2, pib2, densidade2, pib_per2, dens_inversa2;

            //Batalha
            int batalha;

        //CARTA 01  input
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
            // super_poder2 = (float) pontos_turisticos2 + (float) populacao2 + area2 + pib2 + dens_inversa2 + pib_per2;

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
            printf("Agora escolha um atributo para a batalha do Super Trunfo!\n\n");

printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &batalha);

switch (batalha) {
    case 1: // População
        printf("A batalha vai ser entre: %s (%s) e %s (%s) \n", nome_cidade1, pais1, nome_cidade2, pais2);
        if (populacao1 > populacao2) {
            printf("%s venceu a batalha, sua população é de %d \n", nome_cidade1, populacao1);
            printf("Enquanto %d é a população de %s (%s), que perdeu a batalha.\n", populacao2, nome_cidade2, pais2);
        } else if (populacao1 == populacao2) {
            printf("Empate! Ambas as populações são de %d\n", populacao1);
        } else {
            printf("%s venceu a batalha. A POPULAÇÃO de %s é %d\n", pais2, nome_cidade2, populacao2);
            printf("Enquanto %d é a população de %s (%s), que perdeu a batalha.\n", populacao1, nome_cidade1, pais1);
        }
        break;

    case 2: // Área
        printf("A batalha vai ser entre: %s (%s) e %s (%s) \n", nome_cidade1, pais1, nome_cidade2, pais2);
        if (area1 > area2) {
            printf("%s venceu a batalha, com ÁREA de %.0f km²\n",nome_cidade1, area1);
            printf("Enquanto %.0f km² é a área de %s (%s), que perdeu a batalha.\n", area2, nome_cidade2, pais2);
        } else if (area1 == area2) {
            printf("Empate! Ambas as áreas são de %.0f km²\n", area1);
        } else {
            printf("%s venceu a batalha. A ÁREA de %s é %.0f km²\n", nome_cidade2, area2);
            printf("Enquanto %.0f km² é a área de %s (%s), que perdeu a batalha.\n", area1, nome_cidade1, pais1);
        }
        break;

    case 3: // PIB
        printf("A batalha vai ser entre: %s (%s) e %s (%s) \n", nome_cidade1, pais1, nome_cidade2, pais2);
        if (pib1 > pib2) {
            printf("%s (%s) venceu a batalha com o PIB de %.0f \n", nome_cidade1, pais1, pib1);
            printf("Enquanto %.0f  é o PIB de %s (%s), que perdeu a batalha.\n", pib2, nome_cidade2, pais2);
        } else if (pib1 == pib2) {
            printf("Empate! Ambos os PIBs são de %.0f \n", pib1);
        } else {
            printf("%s venceu a batalha com o PIB de %.0f \n", nome_cidade2, pib2);
            printf("Enquanto %.0f  é o PIB de %s (%s), que perdeu a batalha.\n", pib1, nome_cidade1, pais1);
        }
        break;

    case 4: // Pontos turísticos
        printf("A batalha vai ser entre: %s (%s) e %s (%s) \n", nome_cidade1, pais1, nome_cidade2, pais2);
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("%s venceu a batalha com %d pontos turísticos\n",nome_cidade1, pontos_turisticos1);
            printf("Enquanto %s (%s) tem  %d\n", nome_cidade2, pais2, pontos_turisticos2);
        } else if (pontos_turisticos1 == pontos_turisticos2) {
            printf("Empate! Ambos têm %d pontos turísticos\n", pontos_turisticos1);
        } else {
            printf("%s venceu a batalha com %d pontos turísticos\n", nome_cidade2, pontos_turisticos2);
            printf("Enquanto %s (%s) tem  %d\n", nome_cidade1, pais1, pontos_turisticos1);
        }
        break;

    case 5: // Densidade demográfica
        printf("A batalha vai ser entre: %s (%s) e %s (%s) \n", nome_cidade1, pais1, nome_cidade2, pais2);
        if ( dens_inversa1 < dens_inversa2 ) {
            printf("%s venceu a batalha com a DENSIDADE DEMOGRÁFICA de %.3f hab/km² (Quanto menor, melhor!)\n", nome_cidade1, densidade1);
            printf("Enquanto %.3f hab/km² é a densidade de %s (%s)\n", densidade2, nome_cidade2, pais2);
        } else if (dens_inversa1 == dens_inversa2) {
            printf("Empate! Ambas as densidades são de %.3f hab/km²\n", densidade1);
        } else {
            printf("%s venceu a batalha com a DENSIDADE DEMOGRÁFICA de %.3f hab/km² (Quanto menor, melhor!) \n", nome_cidade2, densidade2);
            printf("Enquanto %.3f hab/km² é a densidade de %s (%s)\n", densidade1, nome_cidade1, pais1);
        }
        break;

    default:
        printf("Opção inválida! Escolha de 1 a 5.\n");
        break;
}

        return 0;
        }
