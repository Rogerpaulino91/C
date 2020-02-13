// Um hotel com 42 apartamentos resolveu fazer promoções para os fins de semana fora da alta temporada // 
// isto é, nos meses de abril, maio, junho, agosto, setembro, outubro e novembro. A taxa da promoção é de 22% da diária normal// 
// A ocupação média do hotel sem promoção é de 40% // 
// a taxa de ocupação subindo para 70% escrever um algoritmo que lê a diária normal e calcula //
// O valor da diária no período da promoção. //
// 

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