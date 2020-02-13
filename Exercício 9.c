// Escrever um algoritmo que lê o público total de futebol e fornecer a renda do jogo //
// sabendo-se que havia 4 tipos de ingressos assim distribuídos: popular 10% a R$1,00, geral 50% a R$5,00, arquibancada 30% a R$10,00 e cadeiras 10% a R$ 20,00 //

#include<stdio.h>
#include<math.h>

nt main()
 
{
    int publicototal;
    float rendajogo, ing_pop, ing_geral, ing_arq, ing_cadeira;
 
    scanf("%d",&publicototal);
 
    ing_pop = 0.1 * publicototal;
    ing_geral = 0.5 * publicototal;
    ing_arq = 0.3 * publicototal;
    ing_cadeira = 0.1 * publicototal;
    rendajogo = (ing_pop * 1) + (ing_geral * 5) + (ing_arq * 10) + (ing_cadeira * 20);
 
    printf("A RENDA DO JOGO = %.2f\n",rendajogo);
 
    return 0;
}