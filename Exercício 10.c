// Uma autolocadora aluga seus carros com uma taxa fixa por dia, uma taxa por Km rodado e desconto de 10% na taxa fixa de aluguel por dia //
//Escrever um algoritmo que lê a taxa fixa por dia, a taxa por Km rodado, o número de dias, o número de quilômetro rodado e calcular e escrever o valor total do aluguel, o valor do desconto, o numero de dias, e a quilometragem rodada. //

#include<stdio.h>
#include<math.h>

int main()
 
{
	
    int dias, kmrodado;
    float taxadia, desconto, totalaluguel, taxakm;
 
    scanf("%f",&taxadia);
    scanf("%f",&taxakm);
    scanf("%d",&dias);
    scanf("%d",&kmrodado);
 
    totalaluguel = ((taxadia - (taxadia * 0.1)) * dias) + (taxakm * kmrodado);
    desconto = (taxadia * 0.1) * dias;
 
    printf("VALOR TOTAL DO ALUGUEL = %.2f\n",totalaluguel);
    printf("VALOR DO DESCONTO = %.2f\n",desconto);
    printf("NUMERO DE DIAS = %d\n",dias);
    printf("QUILOMETRAGEM RODADA = %d\n",kmrodado);
 
    return 0;
 
}