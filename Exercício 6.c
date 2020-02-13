// Escrever um algoritmo que lê o valor de uma compra em dólares // 
// a taxa do dólar no dia da compra, o percentual de ICMS e o percentual de lucro da empresa // 
// e calcular e escrever o valor a ser pago em reais, sabendo-se que o percentual de lucro e o percentual de ICMS incidem sobre o valor em reais // 

#include<stdio.h>
#include<math.h>

int main 
 { 
 	float compradolar, taxadolar, icms, lucroempresa, valorpagar, comprareais ;

 	scanf("%f",&compradolar);
 	scanf("%f",&taxadolar);
 	scanf("%f",&icms);
 	scanf("%f",&lucroempresao);

 	comprareais = compradolar * taxadolar;
 	comprareais = (comprareais * icms/100) + (comprareais * lucroempresa / 100) + comprareais;

 	printf("O VALOR PAGO EM REIAS = %.2f\n",comprareais);

 	return 0;
 	

 }